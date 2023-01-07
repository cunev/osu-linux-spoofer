import r from "raylib"

import { XdoToolBindings, XdoToolAsync} from 'xdotool';
import { promises as fs, readFileSync, writeFileSync } from 'fs';
const xdo = new XdoToolBindings();
let a = new XdoToolAsync(xdo);


const screenWidth = 600
const screenHeight = 400
r.SetConfigFlags(r.BORDER_COLOR_DISABLED)
r.InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window")
r.SetTargetFPS(144)
let active = 0

let dragging = false;
let delta = {x:0,y:0}

const logo = r.LoadTexture("./logo.png")

r.GuiLoadStyle('style.rgs')
r.SetTextureFilter(logo, r.TEXTURE_FILTER_BILINEAR);
const font = r.LoadFont("font.ttf")
import { homedir } from 'os'
import { execSync } from "child_process";

let installed = true;
let profile = {model:"",serial:"",uninstall:""}
try {
    const filep = readFileSync(homedir+"/.local/share/wineprefixes/osu-wineprefix/dosdevices/c:/identity.txt",'utf-8').split(' ')
    profile = {model:filep[0].trimEnd(),serial:filep[1].trimEnd(),uninstall:""};
    
    
    const regfile = readFileSync(homedir+"/.local/share/wineprefixes/osu-wineprefix/user.reg",'utf-8')
    profile.uninstall = regfile.slice(regfile.indexOf(`"UninstallID"="`)+15,regfile.indexOf('\n',regfile.indexOf(`"UninstallID"="`))-1)
     
} catch (error) {
    installed = false;
}


function makeid(length) {
    var result           = '';
    var characters       = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789';
    var charactersLength = characters.length;
    for ( var i = 0; i < length; i++ ) {
        result += characters.charAt(Math.floor(Math.random() * charactersLength));
    }
    return result;
}

setInterval(async ()=>{

    if(dragging){
        let mpos = await a.getMouseLocation()
        r.SetWindowPosition(mpos.x-delta.x,mpos.y-delta.y)
    }

    r.BeginDrawing();
    r.ClearBackground({r:0,g:0,b:0,a:15})

    if(r.GuiWindowBox({x:0,y:0,width:600,height:400},"osu!lynx spoofer | osu! linux spoofer")) r.CloseWindow()
    active = r.GuiListView({x:0,y:24,width:200,height:400-24},"About;Spoofer",0,active)

    if(active == 0){
        r.GuiPanel({x:200,y:24,width:400,height:400-24},"About")

        r.DrawTextureEx(logo,{x:240,y:34},0,0.6,r.WHITE)
        r.DrawTextEx(font,"osu!lynx",{x:250,y:330},24,0,{r:104,g:104,b:104,a:255})
        r.DrawTextEx(font,"osu! spoofer for linux" ,{x:250,y:355},16,0,{r:104,g:104,b:104,a:255})
    }

    if(active == 1){
        r.GuiPanel({x:200,y:24,width:400,height:400-24},"Spoofer")
        if(!installed){
            r.GuiLabel({x:215,y:60,width:240,height:20},"osu!lynx is not installed")
        } else {
            r.GuiLabel({x:215,y:60,width:240,height:20},"Model")
            r.GuiButton({x:340,y:60,width:240,height:20},profile.model)   
            r.GuiLabel({x:215,y:90,width:240,height:20},"Serial")
            r.GuiButton({x:340,y:90,width:240,height:20},profile.serial)   
            r.GuiLabel({x:215,y:120,width:240,height:20},"UninstallID")
            r.GuiButton({x:340,y:120,width:240,height:20},profile.uninstall) 
    
            if(r.GuiButton({x:215,y:160,width:365,height:20},"Change identity (osu must be closed)")){
                writeFileSync(homedir+"/.local/share/wineprefixes/osu-wineprefix/dosdevices/c:/identity.txt",`${makeid(10)} ${ makeid(10)}`)
                const filep = readFileSync(homedir+"/.local/share/wineprefixes/osu-wineprefix/dosdevices/c:/identity.txt",'utf-8').split(' ')
                profile = {model:filep[0].trimEnd(),serial:filep[1].trimEnd(),uninstall:""};
                execSync(`osu-wine --unid e1cf9${Math.round(Math.random()*900)+100}-b2d6-44b7-9d${Math.round(Math.random()*90)+10}-${Math.round(Math.random()*900)+100}c${Math.round(Math.random()*90)+10}f8b${Math.round(Math.random()*900)+100}`)
                setTimeout(()=>{
                    const regfile = readFileSync(homedir+"/.local/share/wineprefixes/osu-wineprefix/user.reg",'utf-8')
                    profile.uninstall = regfile.slice(regfile.indexOf(`"UninstallID"="`)+15,regfile.indexOf('\n',regfile.indexOf(`"UninstallID"="`))-1)
                },250)
            }
        }

    }
    r.EndDrawing()

    if(r.IsMouseButtonPressed(0)){
        if(r.GetMouseY()<24){
            dragging = true;
            delta = r.GetMousePosition()
        }
    }
    if(r.IsMouseButtonReleased(0)){
        dragging = false;
    }
})



    
