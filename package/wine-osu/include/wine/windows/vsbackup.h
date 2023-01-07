/*** Autogenerated by WIDL 7.0 from ../wine-osu/include/vsbackup.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __vsbackup_h__
#define __vsbackup_h__

/* Forward declarations */

#ifndef __IVssBackupComponents_FWD_DEFINED__
#define __IVssBackupComponents_FWD_DEFINED__
typedef interface IVssBackupComponents IVssBackupComponents;
#ifdef __cplusplus
interface IVssBackupComponents;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <oaidl.h>
#include <vswriter.h>
#include <vss.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __IVssAsync_FWD_DEFINED__
#define __IVssAsync_FWD_DEFINED__
typedef interface IVssAsync IVssAsync;
#ifdef __cplusplus
interface IVssAsync;
#endif /* __cplusplus */
#endif

#ifndef __IVssEnumObject_FWD_DEFINED__
#define __IVssEnumObject_FWD_DEFINED__
typedef interface IVssEnumObject IVssEnumObject;
#ifdef __cplusplus
interface IVssEnumObject;
#endif /* __cplusplus */
#endif

#ifndef __IVssExamineWriterMetadata_FWD_DEFINED__
#define __IVssExamineWriterMetadata_FWD_DEFINED__
typedef interface IVssExamineWriterMetadata IVssExamineWriterMetadata;
#ifdef __cplusplus
interface IVssExamineWriterMetadata;
#endif /* __cplusplus */
#endif

#ifndef __IVssWriterComponentsExt_FWD_DEFINED__
#define __IVssWriterComponentsExt_FWD_DEFINED__
typedef interface IVssWriterComponentsExt IVssWriterComponentsExt;
#ifdef __cplusplus
interface IVssWriterComponentsExt;
#endif /* __cplusplus */
#endif

HRESULT WINAPI CreateVssBackupComponentsInternal(IVssBackupComponents **backup);
static inline HRESULT CreateVssBackupComponents(IVssBackupComponents **backup)
     { return CreateVssBackupComponentsInternal(backup); }
/*****************************************************************************
 * IVssBackupComponents interface
 */
#ifndef __IVssBackupComponents_INTERFACE_DEFINED__
#define __IVssBackupComponents_INTERFACE_DEFINED__

DEFINE_GUID(IID_IVssBackupComponents, 0x665c1d5f, 0xc218, 0x414d, 0xa0,0x5d, 0x7f,0xef,0x5f,0x9d,0x5c,0x86);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("665c1d5f-c218-414d-a05d-7fef5f9d5c86")
IVssBackupComponents : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetWriterComponentsCount(
        UINT *components) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetWriterComponents(
        UINT index,
        IVssWriterComponentsExt **writer) = 0;

    virtual HRESULT STDMETHODCALLTYPE InitializeForBackup(
        BSTR bstrXML = 0) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetBackupState(
        BOOL select_components,
        BOOL state,
        VSS_BACKUP_TYPE type,
        BOOL partial_support = FALSE) = 0;

    virtual HRESULT STDMETHODCALLTYPE InitializeForRestore(
        BSTR xml) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetRestoreState(
        VSS_RESTORE_TYPE restore) = 0;

    virtual HRESULT STDMETHODCALLTYPE GatherWriterMetadata(
        IVssAsync **async) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetWriterMetadataCount(
        UINT *count) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetWriterMetadata(
        UINT index,
        VSS_ID *instance,
        IVssExamineWriterMetadata **metadata) = 0;

    virtual HRESULT STDMETHODCALLTYPE FreeWriterMetadata(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE AddComponent(
        VSS_ID instance,
        VSS_ID id,
        VSS_COMPONENT_TYPE ct,
        LPCWSTR wszLogicalPath,
        LPCWSTR name) = 0;

    virtual HRESULT STDMETHODCALLTYPE PrepareForBackup(
        IVssAsync **async) = 0;

    virtual HRESULT STDMETHODCALLTYPE AbortBackup(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE GatherWriterStatus(
        IVssAsync **async) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetWriterStatusCount(
        UINT *count) = 0;

    virtual HRESULT STDMETHODCALLTYPE FreeWriterStatus(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetWriterStatus(
        UINT index,
        VSS_ID *instance,
        VSS_ID *id,
        BSTR *writer,
        VSS_WRITER_STATE *status,
        HRESULT *failure) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetBackupSucceeded(
        VSS_ID instance,
        VSS_ID id,
        VSS_COMPONENT_TYPE ct,
        LPCWSTR path,
        LPCWSTR name,
        BOOL succeeded) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetBackupOptions(
        VSS_ID id,
        VSS_COMPONENT_TYPE ct,
        LPCWSTR path,
        LPCWSTR name,
        LPCWSTR options) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetSelectedForRestore(
        VSS_ID id,
        VSS_COMPONENT_TYPE ct,
        LPCWSTR path,
        LPCWSTR name,
        BOOL selected_restore) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetRestoreOptions(
        VSS_ID id,
        VSS_COMPONENT_TYPE ct,
        LPCWSTR path,
        LPCWSTR name,
        LPCWSTR options) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetAdditionalRestores(
        VSS_ID id,
        VSS_COMPONENT_TYPE ct,
        LPCWSTR path,
        LPCWSTR name,
        BOOL additional) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetPreviousBackupStamp(
        VSS_ID id,
        VSS_COMPONENT_TYPE ct,
        LPCWSTR path,
        LPCWSTR name,
        LPCWSTR stamp) = 0;

    virtual HRESULT STDMETHODCALLTYPE SaveAsXML(
        BSTR *xml) = 0;

    virtual HRESULT STDMETHODCALLTYPE BackupComplete(
        IVssAsync **async) = 0;

    virtual HRESULT STDMETHODCALLTYPE AddAlternativeLocationMapping(
        VSS_ID id,
        VSS_COMPONENT_TYPE type,
        LPCWSTR logical,
        LPCWSTR name,
        LPCWSTR path,
        LPCWSTR filespec,
        BOOL recursive,
        LPCWSTR destination) = 0;

    virtual HRESULT STDMETHODCALLTYPE AddRestoreSubcomponent(
        VSS_ID id,
        VSS_COMPONENT_TYPE type,
        LPCWSTR logical,
        LPCWSTR name,
        LPCWSTR path,
        LPCWSTR sub_name,
        BOOL repair) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetFileRestoreStatus(
        VSS_ID id,
        VSS_COMPONENT_TYPE ct,
        LPCWSTR path,
        LPCWSTR name,
        VSS_FILE_RESTORE_STATUS status) = 0;

    virtual HRESULT STDMETHODCALLTYPE AddNewTarget(
        VSS_ID id,
        VSS_COMPONENT_TYPE ct,
        LPCWSTR logical,
        LPCWSTR component,
        LPCWSTR path,
        LPCWSTR filename,
        BOOL recursive,
        LPCWSTR alternate) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetRangesFilePath(
        VSS_ID id,
        VSS_COMPONENT_TYPE ct,
        LPCWSTR logical,
        LPCWSTR component,
        UINT partial,
        LPCWSTR ranges) = 0;

    virtual HRESULT STDMETHODCALLTYPE PreRestore(
        IVssAsync **async) = 0;

    virtual HRESULT STDMETHODCALLTYPE PostRestore(
        IVssAsync **async) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetContext(
        LONG context) = 0;

    virtual HRESULT STDMETHODCALLTYPE StartSnapshotSet(
        VSS_ID *id) = 0;

    virtual HRESULT STDMETHODCALLTYPE AddToSnapshotSet(
        VSS_PWSZ volume,
        VSS_ID id,
        VSS_ID *snapshot) = 0;

    virtual HRESULT STDMETHODCALLTYPE DoSnapshotSet(
        IVssAsync **async) = 0;

    virtual HRESULT STDMETHODCALLTYPE DeleteSnapshots(
        VSS_ID object,
        VSS_OBJECT_TYPE type,
        BOOL force,
        LONG *snapshots,
        VSS_ID *id) = 0;

    virtual HRESULT STDMETHODCALLTYPE ImportSnapshots(
        IVssAsync **async) = 0;

    virtual HRESULT STDMETHODCALLTYPE BreakSnapshotSet(
        VSS_ID snapshot) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSnapshotProperties(
        VSS_ID snapshot,
        VSS_SNAPSHOT_PROP *prop) = 0;

    virtual HRESULT STDMETHODCALLTYPE Query(
        VSS_ID queried,
        VSS_OBJECT_TYPE queried_type,
        VSS_OBJECT_TYPE returned_type,
        IVssEnumObject **enums) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsVolumeSupported(
        VSS_ID provider,
        VSS_PWSZ volume,
        BOOL *supported) = 0;

    virtual HRESULT STDMETHODCALLTYPE DisableWriterClasses(
        const VSS_ID *writer_id,
        UINT class_id) = 0;

    virtual HRESULT STDMETHODCALLTYPE EnableWriterClasses(
        const VSS_ID *classid,
        UINT id) = 0;

    virtual HRESULT STDMETHODCALLTYPE DisableWriterInstances(
        const VSS_ID *instance,
        UINT id) = 0;

    virtual HRESULT STDMETHODCALLTYPE ExposeSnapshot(
        VSS_ID snapshot,
        VSS_PWSZ path,
        LONG attributes,
        VSS_PWSZ expose,
        VSS_PWSZ *exposed) = 0;

    virtual HRESULT STDMETHODCALLTYPE RevertToSnapshot(
        VSS_ID snapshot,
        BOOL force) = 0;

    virtual HRESULT STDMETHODCALLTYPE QueryRevertStatus(
        VSS_PWSZ volume,
        IVssAsync **async) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IVssBackupComponents, 0x665c1d5f, 0xc218, 0x414d, 0xa0,0x5d, 0x7f,0xef,0x5f,0x9d,0x5c,0x86)
#endif
#else
typedef struct IVssBackupComponentsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IVssBackupComponents *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IVssBackupComponents *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IVssBackupComponents *This);

    /*** IVssBackupComponents methods ***/
    HRESULT (STDMETHODCALLTYPE *GetWriterComponentsCount)(
        IVssBackupComponents *This,
        UINT *components);

    HRESULT (STDMETHODCALLTYPE *GetWriterComponents)(
        IVssBackupComponents *This,
        UINT index,
        IVssWriterComponentsExt **writer);

    HRESULT (STDMETHODCALLTYPE *InitializeForBackup)(
        IVssBackupComponents *This,
        BSTR bstrXML);

    HRESULT (STDMETHODCALLTYPE *SetBackupState)(
        IVssBackupComponents *This,
        BOOL select_components,
        BOOL state,
        VSS_BACKUP_TYPE type,
        BOOL partial_support);

    HRESULT (STDMETHODCALLTYPE *InitializeForRestore)(
        IVssBackupComponents *This,
        BSTR xml);

    HRESULT (STDMETHODCALLTYPE *SetRestoreState)(
        IVssBackupComponents *This,
        VSS_RESTORE_TYPE restore);

    HRESULT (STDMETHODCALLTYPE *GatherWriterMetadata)(
        IVssBackupComponents *This,
        IVssAsync **async);

    HRESULT (STDMETHODCALLTYPE *GetWriterMetadataCount)(
        IVssBackupComponents *This,
        UINT *count);

    HRESULT (STDMETHODCALLTYPE *GetWriterMetadata)(
        IVssBackupComponents *This,
        UINT index,
        VSS_ID *instance,
        IVssExamineWriterMetadata **metadata);

    HRESULT (STDMETHODCALLTYPE *FreeWriterMetadata)(
        IVssBackupComponents *This);

    HRESULT (STDMETHODCALLTYPE *AddComponent)(
        IVssBackupComponents *This,
        VSS_ID instance,
        VSS_ID id,
        VSS_COMPONENT_TYPE ct,
        LPCWSTR wszLogicalPath,
        LPCWSTR name);

    HRESULT (STDMETHODCALLTYPE *PrepareForBackup)(
        IVssBackupComponents *This,
        IVssAsync **async);

    HRESULT (STDMETHODCALLTYPE *AbortBackup)(
        IVssBackupComponents *This);

    HRESULT (STDMETHODCALLTYPE *GatherWriterStatus)(
        IVssBackupComponents *This,
        IVssAsync **async);

    HRESULT (STDMETHODCALLTYPE *GetWriterStatusCount)(
        IVssBackupComponents *This,
        UINT *count);

    HRESULT (STDMETHODCALLTYPE *FreeWriterStatus)(
        IVssBackupComponents *This);

    HRESULT (STDMETHODCALLTYPE *GetWriterStatus)(
        IVssBackupComponents *This,
        UINT index,
        VSS_ID *instance,
        VSS_ID *id,
        BSTR *writer,
        VSS_WRITER_STATE *status,
        HRESULT *failure);

    HRESULT (STDMETHODCALLTYPE *SetBackupSucceeded)(
        IVssBackupComponents *This,
        VSS_ID instance,
        VSS_ID id,
        VSS_COMPONENT_TYPE ct,
        LPCWSTR path,
        LPCWSTR name,
        BOOL succeeded);

    HRESULT (STDMETHODCALLTYPE *SetBackupOptions)(
        IVssBackupComponents *This,
        VSS_ID id,
        VSS_COMPONENT_TYPE ct,
        LPCWSTR path,
        LPCWSTR name,
        LPCWSTR options);

    HRESULT (STDMETHODCALLTYPE *SetSelectedForRestore)(
        IVssBackupComponents *This,
        VSS_ID id,
        VSS_COMPONENT_TYPE ct,
        LPCWSTR path,
        LPCWSTR name,
        BOOL selected_restore);

    HRESULT (STDMETHODCALLTYPE *SetRestoreOptions)(
        IVssBackupComponents *This,
        VSS_ID id,
        VSS_COMPONENT_TYPE ct,
        LPCWSTR path,
        LPCWSTR name,
        LPCWSTR options);

    HRESULT (STDMETHODCALLTYPE *SetAdditionalRestores)(
        IVssBackupComponents *This,
        VSS_ID id,
        VSS_COMPONENT_TYPE ct,
        LPCWSTR path,
        LPCWSTR name,
        BOOL additional);

    HRESULT (STDMETHODCALLTYPE *SetPreviousBackupStamp)(
        IVssBackupComponents *This,
        VSS_ID id,
        VSS_COMPONENT_TYPE ct,
        LPCWSTR path,
        LPCWSTR name,
        LPCWSTR stamp);

    HRESULT (STDMETHODCALLTYPE *SaveAsXML)(
        IVssBackupComponents *This,
        BSTR *xml);

    HRESULT (STDMETHODCALLTYPE *BackupComplete)(
        IVssBackupComponents *This,
        IVssAsync **async);

    HRESULT (STDMETHODCALLTYPE *AddAlternativeLocationMapping)(
        IVssBackupComponents *This,
        VSS_ID id,
        VSS_COMPONENT_TYPE type,
        LPCWSTR logical,
        LPCWSTR name,
        LPCWSTR path,
        LPCWSTR filespec,
        BOOL recursive,
        LPCWSTR destination);

    HRESULT (STDMETHODCALLTYPE *AddRestoreSubcomponent)(
        IVssBackupComponents *This,
        VSS_ID id,
        VSS_COMPONENT_TYPE type,
        LPCWSTR logical,
        LPCWSTR name,
        LPCWSTR path,
        LPCWSTR sub_name,
        BOOL repair);

    HRESULT (STDMETHODCALLTYPE *SetFileRestoreStatus)(
        IVssBackupComponents *This,
        VSS_ID id,
        VSS_COMPONENT_TYPE ct,
        LPCWSTR path,
        LPCWSTR name,
        VSS_FILE_RESTORE_STATUS status);

    HRESULT (STDMETHODCALLTYPE *AddNewTarget)(
        IVssBackupComponents *This,
        VSS_ID id,
        VSS_COMPONENT_TYPE ct,
        LPCWSTR logical,
        LPCWSTR component,
        LPCWSTR path,
        LPCWSTR filename,
        BOOL recursive,
        LPCWSTR alternate);

    HRESULT (STDMETHODCALLTYPE *SetRangesFilePath)(
        IVssBackupComponents *This,
        VSS_ID id,
        VSS_COMPONENT_TYPE ct,
        LPCWSTR logical,
        LPCWSTR component,
        UINT partial,
        LPCWSTR ranges);

    HRESULT (STDMETHODCALLTYPE *PreRestore)(
        IVssBackupComponents *This,
        IVssAsync **async);

    HRESULT (STDMETHODCALLTYPE *PostRestore)(
        IVssBackupComponents *This,
        IVssAsync **async);

    HRESULT (STDMETHODCALLTYPE *SetContext)(
        IVssBackupComponents *This,
        LONG context);

    HRESULT (STDMETHODCALLTYPE *StartSnapshotSet)(
        IVssBackupComponents *This,
        VSS_ID *id);

    HRESULT (STDMETHODCALLTYPE *AddToSnapshotSet)(
        IVssBackupComponents *This,
        VSS_PWSZ volume,
        VSS_ID id,
        VSS_ID *snapshot);

    HRESULT (STDMETHODCALLTYPE *DoSnapshotSet)(
        IVssBackupComponents *This,
        IVssAsync **async);

    HRESULT (STDMETHODCALLTYPE *DeleteSnapshots)(
        IVssBackupComponents *This,
        VSS_ID object,
        VSS_OBJECT_TYPE type,
        BOOL force,
        LONG *snapshots,
        VSS_ID *id);

    HRESULT (STDMETHODCALLTYPE *ImportSnapshots)(
        IVssBackupComponents *This,
        IVssAsync **async);

    HRESULT (STDMETHODCALLTYPE *BreakSnapshotSet)(
        IVssBackupComponents *This,
        VSS_ID snapshot);

    HRESULT (STDMETHODCALLTYPE *GetSnapshotProperties)(
        IVssBackupComponents *This,
        VSS_ID snapshot,
        VSS_SNAPSHOT_PROP *prop);

    HRESULT (STDMETHODCALLTYPE *Query)(
        IVssBackupComponents *This,
        VSS_ID queried,
        VSS_OBJECT_TYPE queried_type,
        VSS_OBJECT_TYPE returned_type,
        IVssEnumObject **enums);

    HRESULT (STDMETHODCALLTYPE *IsVolumeSupported)(
        IVssBackupComponents *This,
        VSS_ID provider,
        VSS_PWSZ volume,
        BOOL *supported);

    HRESULT (STDMETHODCALLTYPE *DisableWriterClasses)(
        IVssBackupComponents *This,
        const VSS_ID *writer_id,
        UINT class_id);

    HRESULT (STDMETHODCALLTYPE *EnableWriterClasses)(
        IVssBackupComponents *This,
        const VSS_ID *classid,
        UINT id);

    HRESULT (STDMETHODCALLTYPE *DisableWriterInstances)(
        IVssBackupComponents *This,
        const VSS_ID *instance,
        UINT id);

    HRESULT (STDMETHODCALLTYPE *ExposeSnapshot)(
        IVssBackupComponents *This,
        VSS_ID snapshot,
        VSS_PWSZ path,
        LONG attributes,
        VSS_PWSZ expose,
        VSS_PWSZ *exposed);

    HRESULT (STDMETHODCALLTYPE *RevertToSnapshot)(
        IVssBackupComponents *This,
        VSS_ID snapshot,
        BOOL force);

    HRESULT (STDMETHODCALLTYPE *QueryRevertStatus)(
        IVssBackupComponents *This,
        VSS_PWSZ volume,
        IVssAsync **async);

    END_INTERFACE
} IVssBackupComponentsVtbl;

interface IVssBackupComponents {
    CONST_VTBL IVssBackupComponentsVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IVssBackupComponents_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IVssBackupComponents_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IVssBackupComponents_Release(This) (This)->lpVtbl->Release(This)
/*** IVssBackupComponents methods ***/
#define IVssBackupComponents_GetWriterComponentsCount(This,components) (This)->lpVtbl->GetWriterComponentsCount(This,components)
#define IVssBackupComponents_GetWriterComponents(This,index,writer) (This)->lpVtbl->GetWriterComponents(This,index,writer)
#define IVssBackupComponents_InitializeForBackup(This,bstrXML) (This)->lpVtbl->InitializeForBackup(This,bstrXML)
#define IVssBackupComponents_SetBackupState(This,select_components,state,type,partial_support) (This)->lpVtbl->SetBackupState(This,select_components,state,type,partial_support)
#define IVssBackupComponents_InitializeForRestore(This,xml) (This)->lpVtbl->InitializeForRestore(This,xml)
#define IVssBackupComponents_SetRestoreState(This,restore) (This)->lpVtbl->SetRestoreState(This,restore)
#define IVssBackupComponents_GatherWriterMetadata(This,async) (This)->lpVtbl->GatherWriterMetadata(This,async)
#define IVssBackupComponents_GetWriterMetadataCount(This,count) (This)->lpVtbl->GetWriterMetadataCount(This,count)
#define IVssBackupComponents_GetWriterMetadata(This,index,instance,metadata) (This)->lpVtbl->GetWriterMetadata(This,index,instance,metadata)
#define IVssBackupComponents_FreeWriterMetadata(This) (This)->lpVtbl->FreeWriterMetadata(This)
#define IVssBackupComponents_AddComponent(This,instance,id,ct,wszLogicalPath,name) (This)->lpVtbl->AddComponent(This,instance,id,ct,wszLogicalPath,name)
#define IVssBackupComponents_PrepareForBackup(This,async) (This)->lpVtbl->PrepareForBackup(This,async)
#define IVssBackupComponents_AbortBackup(This) (This)->lpVtbl->AbortBackup(This)
#define IVssBackupComponents_GatherWriterStatus(This,async) (This)->lpVtbl->GatherWriterStatus(This,async)
#define IVssBackupComponents_GetWriterStatusCount(This,count) (This)->lpVtbl->GetWriterStatusCount(This,count)
#define IVssBackupComponents_FreeWriterStatus(This) (This)->lpVtbl->FreeWriterStatus(This)
#define IVssBackupComponents_GetWriterStatus(This,index,instance,id,writer,status,failure) (This)->lpVtbl->GetWriterStatus(This,index,instance,id,writer,status,failure)
#define IVssBackupComponents_SetBackupSucceeded(This,instance,id,ct,path,name,succeeded) (This)->lpVtbl->SetBackupSucceeded(This,instance,id,ct,path,name,succeeded)
#define IVssBackupComponents_SetBackupOptions(This,id,ct,path,name,options) (This)->lpVtbl->SetBackupOptions(This,id,ct,path,name,options)
#define IVssBackupComponents_SetSelectedForRestore(This,id,ct,path,name,selected_restore) (This)->lpVtbl->SetSelectedForRestore(This,id,ct,path,name,selected_restore)
#define IVssBackupComponents_SetRestoreOptions(This,id,ct,path,name,options) (This)->lpVtbl->SetRestoreOptions(This,id,ct,path,name,options)
#define IVssBackupComponents_SetAdditionalRestores(This,id,ct,path,name,additional) (This)->lpVtbl->SetAdditionalRestores(This,id,ct,path,name,additional)
#define IVssBackupComponents_SetPreviousBackupStamp(This,id,ct,path,name,stamp) (This)->lpVtbl->SetPreviousBackupStamp(This,id,ct,path,name,stamp)
#define IVssBackupComponents_SaveAsXML(This,xml) (This)->lpVtbl->SaveAsXML(This,xml)
#define IVssBackupComponents_BackupComplete(This,async) (This)->lpVtbl->BackupComplete(This,async)
#define IVssBackupComponents_AddAlternativeLocationMapping(This,id,type,logical,name,path,filespec,recursive,destination) (This)->lpVtbl->AddAlternativeLocationMapping(This,id,type,logical,name,path,filespec,recursive,destination)
#define IVssBackupComponents_AddRestoreSubcomponent(This,id,type,logical,name,path,sub_name,repair) (This)->lpVtbl->AddRestoreSubcomponent(This,id,type,logical,name,path,sub_name,repair)
#define IVssBackupComponents_SetFileRestoreStatus(This,id,ct,path,name,status) (This)->lpVtbl->SetFileRestoreStatus(This,id,ct,path,name,status)
#define IVssBackupComponents_AddNewTarget(This,id,ct,logical,component,path,filename,recursive,alternate) (This)->lpVtbl->AddNewTarget(This,id,ct,logical,component,path,filename,recursive,alternate)
#define IVssBackupComponents_SetRangesFilePath(This,id,ct,logical,component,partial,ranges) (This)->lpVtbl->SetRangesFilePath(This,id,ct,logical,component,partial,ranges)
#define IVssBackupComponents_PreRestore(This,async) (This)->lpVtbl->PreRestore(This,async)
#define IVssBackupComponents_PostRestore(This,async) (This)->lpVtbl->PostRestore(This,async)
#define IVssBackupComponents_SetContext(This,context) (This)->lpVtbl->SetContext(This,context)
#define IVssBackupComponents_StartSnapshotSet(This,id) (This)->lpVtbl->StartSnapshotSet(This,id)
#define IVssBackupComponents_AddToSnapshotSet(This,volume,id,snapshot) (This)->lpVtbl->AddToSnapshotSet(This,volume,id,snapshot)
#define IVssBackupComponents_DoSnapshotSet(This,async) (This)->lpVtbl->DoSnapshotSet(This,async)
#define IVssBackupComponents_DeleteSnapshots(This,object,type,force,snapshots,id) (This)->lpVtbl->DeleteSnapshots(This,object,type,force,snapshots,id)
#define IVssBackupComponents_ImportSnapshots(This,async) (This)->lpVtbl->ImportSnapshots(This,async)
#define IVssBackupComponents_BreakSnapshotSet(This,snapshot) (This)->lpVtbl->BreakSnapshotSet(This,snapshot)
#define IVssBackupComponents_GetSnapshotProperties(This,snapshot,prop) (This)->lpVtbl->GetSnapshotProperties(This,snapshot,prop)
#define IVssBackupComponents_Query(This,queried,queried_type,returned_type,enums) (This)->lpVtbl->Query(This,queried,queried_type,returned_type,enums)
#define IVssBackupComponents_IsVolumeSupported(This,provider,volume,supported) (This)->lpVtbl->IsVolumeSupported(This,provider,volume,supported)
#define IVssBackupComponents_DisableWriterClasses(This,writer_id,class_id) (This)->lpVtbl->DisableWriterClasses(This,writer_id,class_id)
#define IVssBackupComponents_EnableWriterClasses(This,classid,id) (This)->lpVtbl->EnableWriterClasses(This,classid,id)
#define IVssBackupComponents_DisableWriterInstances(This,instance,id) (This)->lpVtbl->DisableWriterInstances(This,instance,id)
#define IVssBackupComponents_ExposeSnapshot(This,snapshot,path,attributes,expose,exposed) (This)->lpVtbl->ExposeSnapshot(This,snapshot,path,attributes,expose,exposed)
#define IVssBackupComponents_RevertToSnapshot(This,snapshot,force) (This)->lpVtbl->RevertToSnapshot(This,snapshot,force)
#define IVssBackupComponents_QueryRevertStatus(This,volume,async) (This)->lpVtbl->QueryRevertStatus(This,volume,async)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IVssBackupComponents_QueryInterface(IVssBackupComponents* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IVssBackupComponents_AddRef(IVssBackupComponents* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IVssBackupComponents_Release(IVssBackupComponents* This) {
    return This->lpVtbl->Release(This);
}
/*** IVssBackupComponents methods ***/
static FORCEINLINE HRESULT IVssBackupComponents_GetWriterComponentsCount(IVssBackupComponents* This,UINT *components) {
    return This->lpVtbl->GetWriterComponentsCount(This,components);
}
static FORCEINLINE HRESULT IVssBackupComponents_GetWriterComponents(IVssBackupComponents* This,UINT index,IVssWriterComponentsExt **writer) {
    return This->lpVtbl->GetWriterComponents(This,index,writer);
}
static FORCEINLINE HRESULT IVssBackupComponents_InitializeForBackup(IVssBackupComponents* This,BSTR bstrXML) {
    return This->lpVtbl->InitializeForBackup(This,bstrXML);
}
static FORCEINLINE HRESULT IVssBackupComponents_SetBackupState(IVssBackupComponents* This,BOOL select_components,BOOL state,VSS_BACKUP_TYPE type,BOOL partial_support) {
    return This->lpVtbl->SetBackupState(This,select_components,state,type,partial_support);
}
static FORCEINLINE HRESULT IVssBackupComponents_InitializeForRestore(IVssBackupComponents* This,BSTR xml) {
    return This->lpVtbl->InitializeForRestore(This,xml);
}
static FORCEINLINE HRESULT IVssBackupComponents_SetRestoreState(IVssBackupComponents* This,VSS_RESTORE_TYPE restore) {
    return This->lpVtbl->SetRestoreState(This,restore);
}
static FORCEINLINE HRESULT IVssBackupComponents_GatherWriterMetadata(IVssBackupComponents* This,IVssAsync **async) {
    return This->lpVtbl->GatherWriterMetadata(This,async);
}
static FORCEINLINE HRESULT IVssBackupComponents_GetWriterMetadataCount(IVssBackupComponents* This,UINT *count) {
    return This->lpVtbl->GetWriterMetadataCount(This,count);
}
static FORCEINLINE HRESULT IVssBackupComponents_GetWriterMetadata(IVssBackupComponents* This,UINT index,VSS_ID *instance,IVssExamineWriterMetadata **metadata) {
    return This->lpVtbl->GetWriterMetadata(This,index,instance,metadata);
}
static FORCEINLINE HRESULT IVssBackupComponents_FreeWriterMetadata(IVssBackupComponents* This) {
    return This->lpVtbl->FreeWriterMetadata(This);
}
static FORCEINLINE HRESULT IVssBackupComponents_AddComponent(IVssBackupComponents* This,VSS_ID instance,VSS_ID id,VSS_COMPONENT_TYPE ct,LPCWSTR wszLogicalPath,LPCWSTR name) {
    return This->lpVtbl->AddComponent(This,instance,id,ct,wszLogicalPath,name);
}
static FORCEINLINE HRESULT IVssBackupComponents_PrepareForBackup(IVssBackupComponents* This,IVssAsync **async) {
    return This->lpVtbl->PrepareForBackup(This,async);
}
static FORCEINLINE HRESULT IVssBackupComponents_AbortBackup(IVssBackupComponents* This) {
    return This->lpVtbl->AbortBackup(This);
}
static FORCEINLINE HRESULT IVssBackupComponents_GatherWriterStatus(IVssBackupComponents* This,IVssAsync **async) {
    return This->lpVtbl->GatherWriterStatus(This,async);
}
static FORCEINLINE HRESULT IVssBackupComponents_GetWriterStatusCount(IVssBackupComponents* This,UINT *count) {
    return This->lpVtbl->GetWriterStatusCount(This,count);
}
static FORCEINLINE HRESULT IVssBackupComponents_FreeWriterStatus(IVssBackupComponents* This) {
    return This->lpVtbl->FreeWriterStatus(This);
}
static FORCEINLINE HRESULT IVssBackupComponents_GetWriterStatus(IVssBackupComponents* This,UINT index,VSS_ID *instance,VSS_ID *id,BSTR *writer,VSS_WRITER_STATE *status,HRESULT *failure) {
    return This->lpVtbl->GetWriterStatus(This,index,instance,id,writer,status,failure);
}
static FORCEINLINE HRESULT IVssBackupComponents_SetBackupSucceeded(IVssBackupComponents* This,VSS_ID instance,VSS_ID id,VSS_COMPONENT_TYPE ct,LPCWSTR path,LPCWSTR name,BOOL succeeded) {
    return This->lpVtbl->SetBackupSucceeded(This,instance,id,ct,path,name,succeeded);
}
static FORCEINLINE HRESULT IVssBackupComponents_SetBackupOptions(IVssBackupComponents* This,VSS_ID id,VSS_COMPONENT_TYPE ct,LPCWSTR path,LPCWSTR name,LPCWSTR options) {
    return This->lpVtbl->SetBackupOptions(This,id,ct,path,name,options);
}
static FORCEINLINE HRESULT IVssBackupComponents_SetSelectedForRestore(IVssBackupComponents* This,VSS_ID id,VSS_COMPONENT_TYPE ct,LPCWSTR path,LPCWSTR name,BOOL selected_restore) {
    return This->lpVtbl->SetSelectedForRestore(This,id,ct,path,name,selected_restore);
}
static FORCEINLINE HRESULT IVssBackupComponents_SetRestoreOptions(IVssBackupComponents* This,VSS_ID id,VSS_COMPONENT_TYPE ct,LPCWSTR path,LPCWSTR name,LPCWSTR options) {
    return This->lpVtbl->SetRestoreOptions(This,id,ct,path,name,options);
}
static FORCEINLINE HRESULT IVssBackupComponents_SetAdditionalRestores(IVssBackupComponents* This,VSS_ID id,VSS_COMPONENT_TYPE ct,LPCWSTR path,LPCWSTR name,BOOL additional) {
    return This->lpVtbl->SetAdditionalRestores(This,id,ct,path,name,additional);
}
static FORCEINLINE HRESULT IVssBackupComponents_SetPreviousBackupStamp(IVssBackupComponents* This,VSS_ID id,VSS_COMPONENT_TYPE ct,LPCWSTR path,LPCWSTR name,LPCWSTR stamp) {
    return This->lpVtbl->SetPreviousBackupStamp(This,id,ct,path,name,stamp);
}
static FORCEINLINE HRESULT IVssBackupComponents_SaveAsXML(IVssBackupComponents* This,BSTR *xml) {
    return This->lpVtbl->SaveAsXML(This,xml);
}
static FORCEINLINE HRESULT IVssBackupComponents_BackupComplete(IVssBackupComponents* This,IVssAsync **async) {
    return This->lpVtbl->BackupComplete(This,async);
}
static FORCEINLINE HRESULT IVssBackupComponents_AddAlternativeLocationMapping(IVssBackupComponents* This,VSS_ID id,VSS_COMPONENT_TYPE type,LPCWSTR logical,LPCWSTR name,LPCWSTR path,LPCWSTR filespec,BOOL recursive,LPCWSTR destination) {
    return This->lpVtbl->AddAlternativeLocationMapping(This,id,type,logical,name,path,filespec,recursive,destination);
}
static FORCEINLINE HRESULT IVssBackupComponents_AddRestoreSubcomponent(IVssBackupComponents* This,VSS_ID id,VSS_COMPONENT_TYPE type,LPCWSTR logical,LPCWSTR name,LPCWSTR path,LPCWSTR sub_name,BOOL repair) {
    return This->lpVtbl->AddRestoreSubcomponent(This,id,type,logical,name,path,sub_name,repair);
}
static FORCEINLINE HRESULT IVssBackupComponents_SetFileRestoreStatus(IVssBackupComponents* This,VSS_ID id,VSS_COMPONENT_TYPE ct,LPCWSTR path,LPCWSTR name,VSS_FILE_RESTORE_STATUS status) {
    return This->lpVtbl->SetFileRestoreStatus(This,id,ct,path,name,status);
}
static FORCEINLINE HRESULT IVssBackupComponents_AddNewTarget(IVssBackupComponents* This,VSS_ID id,VSS_COMPONENT_TYPE ct,LPCWSTR logical,LPCWSTR component,LPCWSTR path,LPCWSTR filename,BOOL recursive,LPCWSTR alternate) {
    return This->lpVtbl->AddNewTarget(This,id,ct,logical,component,path,filename,recursive,alternate);
}
static FORCEINLINE HRESULT IVssBackupComponents_SetRangesFilePath(IVssBackupComponents* This,VSS_ID id,VSS_COMPONENT_TYPE ct,LPCWSTR logical,LPCWSTR component,UINT partial,LPCWSTR ranges) {
    return This->lpVtbl->SetRangesFilePath(This,id,ct,logical,component,partial,ranges);
}
static FORCEINLINE HRESULT IVssBackupComponents_PreRestore(IVssBackupComponents* This,IVssAsync **async) {
    return This->lpVtbl->PreRestore(This,async);
}
static FORCEINLINE HRESULT IVssBackupComponents_PostRestore(IVssBackupComponents* This,IVssAsync **async) {
    return This->lpVtbl->PostRestore(This,async);
}
static FORCEINLINE HRESULT IVssBackupComponents_SetContext(IVssBackupComponents* This,LONG context) {
    return This->lpVtbl->SetContext(This,context);
}
static FORCEINLINE HRESULT IVssBackupComponents_StartSnapshotSet(IVssBackupComponents* This,VSS_ID *id) {
    return This->lpVtbl->StartSnapshotSet(This,id);
}
static FORCEINLINE HRESULT IVssBackupComponents_AddToSnapshotSet(IVssBackupComponents* This,VSS_PWSZ volume,VSS_ID id,VSS_ID *snapshot) {
    return This->lpVtbl->AddToSnapshotSet(This,volume,id,snapshot);
}
static FORCEINLINE HRESULT IVssBackupComponents_DoSnapshotSet(IVssBackupComponents* This,IVssAsync **async) {
    return This->lpVtbl->DoSnapshotSet(This,async);
}
static FORCEINLINE HRESULT IVssBackupComponents_DeleteSnapshots(IVssBackupComponents* This,VSS_ID object,VSS_OBJECT_TYPE type,BOOL force,LONG *snapshots,VSS_ID *id) {
    return This->lpVtbl->DeleteSnapshots(This,object,type,force,snapshots,id);
}
static FORCEINLINE HRESULT IVssBackupComponents_ImportSnapshots(IVssBackupComponents* This,IVssAsync **async) {
    return This->lpVtbl->ImportSnapshots(This,async);
}
static FORCEINLINE HRESULT IVssBackupComponents_BreakSnapshotSet(IVssBackupComponents* This,VSS_ID snapshot) {
    return This->lpVtbl->BreakSnapshotSet(This,snapshot);
}
static FORCEINLINE HRESULT IVssBackupComponents_GetSnapshotProperties(IVssBackupComponents* This,VSS_ID snapshot,VSS_SNAPSHOT_PROP *prop) {
    return This->lpVtbl->GetSnapshotProperties(This,snapshot,prop);
}
static FORCEINLINE HRESULT IVssBackupComponents_Query(IVssBackupComponents* This,VSS_ID queried,VSS_OBJECT_TYPE queried_type,VSS_OBJECT_TYPE returned_type,IVssEnumObject **enums) {
    return This->lpVtbl->Query(This,queried,queried_type,returned_type,enums);
}
static FORCEINLINE HRESULT IVssBackupComponents_IsVolumeSupported(IVssBackupComponents* This,VSS_ID provider,VSS_PWSZ volume,BOOL *supported) {
    return This->lpVtbl->IsVolumeSupported(This,provider,volume,supported);
}
static FORCEINLINE HRESULT IVssBackupComponents_DisableWriterClasses(IVssBackupComponents* This,const VSS_ID *writer_id,UINT class_id) {
    return This->lpVtbl->DisableWriterClasses(This,writer_id,class_id);
}
static FORCEINLINE HRESULT IVssBackupComponents_EnableWriterClasses(IVssBackupComponents* This,const VSS_ID *classid,UINT id) {
    return This->lpVtbl->EnableWriterClasses(This,classid,id);
}
static FORCEINLINE HRESULT IVssBackupComponents_DisableWriterInstances(IVssBackupComponents* This,const VSS_ID *instance,UINT id) {
    return This->lpVtbl->DisableWriterInstances(This,instance,id);
}
static FORCEINLINE HRESULT IVssBackupComponents_ExposeSnapshot(IVssBackupComponents* This,VSS_ID snapshot,VSS_PWSZ path,LONG attributes,VSS_PWSZ expose,VSS_PWSZ *exposed) {
    return This->lpVtbl->ExposeSnapshot(This,snapshot,path,attributes,expose,exposed);
}
static FORCEINLINE HRESULT IVssBackupComponents_RevertToSnapshot(IVssBackupComponents* This,VSS_ID snapshot,BOOL force) {
    return This->lpVtbl->RevertToSnapshot(This,snapshot,force);
}
static FORCEINLINE HRESULT IVssBackupComponents_QueryRevertStatus(IVssBackupComponents* This,VSS_PWSZ volume,IVssAsync **async) {
    return This->lpVtbl->QueryRevertStatus(This,volume,async);
}
#endif
#endif

#endif


#endif  /* __IVssBackupComponents_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __vsbackup_h__ */
