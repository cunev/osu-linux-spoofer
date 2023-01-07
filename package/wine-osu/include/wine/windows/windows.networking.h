/*** Autogenerated by WIDL 7.0 from ../wine-osu/include/windows.networking.idl - Do not edit ***/

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

#ifndef __windows_networking_h__
#define __windows_networking_h__

/* Forward declarations */

#ifndef ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CIHostName __x_ABI_CWindows_CNetworking_CIHostName;
#ifdef __cplusplus
#define __x_ABI_CWindows_CNetworking_CIHostName ABI::Windows::Networking::IHostName
namespace ABI {
    namespace Windows {
        namespace Networking {
            interface IHostName;
        }
    }
}
#endif /* __cplusplus */
#endif

#ifndef ____x_ABI_CWindows_CNetworking_CIHostNameFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CIHostNameFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CIHostNameFactory __x_ABI_CWindows_CNetworking_CIHostNameFactory;
#ifdef __cplusplus
#define __x_ABI_CWindows_CNetworking_CIHostNameFactory ABI::Windows::Networking::IHostNameFactory
namespace ABI {
    namespace Windows {
        namespace Networking {
            interface IHostNameFactory;
        }
    }
}
#endif /* __cplusplus */
#endif

#ifndef ____x_ABI_CWindows_CNetworking_CIHostNameStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CIHostNameStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CIHostNameStatics __x_ABI_CWindows_CNetworking_CIHostNameStatics;
#ifdef __cplusplus
#define __x_ABI_CWindows_CNetworking_CIHostNameStatics ABI::Windows::Networking::IHostNameStatics
namespace ABI {
    namespace Windows {
        namespace Networking {
            interface IHostNameStatics;
        }
    }
}
#endif /* __cplusplus */
#endif

#ifndef ____x_ABI_CWindows_CNetworking_CHostName_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CHostName_FWD_DEFINED__
#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Networking {
            class HostName;
        }
    }
}
#else
typedef struct __x_ABI_CWindows_CNetworking_CHostName __x_ABI_CWindows_CNetworking_CHostName;
#endif /* defined __cplusplus */
#endif /* defined ____x_ABI_CWindows_CNetworking_CHostName_FWD_DEFINED__ */

/* Headers for imported files */

#include <inspectable.h>
#include <asyncinfo.h>
#include <eventtoken.h>
#include <windowscontracts.h>
#include <windows.foundation.h>
#include <windows.networking.connectivity.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Networking {
            typedef enum HostNameType HostNameType;
        }
    }
}
#else /* __cplusplus */
typedef enum __x_ABI_CWindows_CNetworking_CHostNameType __x_ABI_CWindows_CNetworking_CHostNameType;
#endif /* __cplusplus */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifdef __cplusplus
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Networking {
            enum HostNameType {
                HostNameType_DomainName = 0,
                HostNameType_Ipv4 = 1,
                HostNameType_Ipv6 = 2,
                HostNameType_Bluetooth = 3
            };
        }
    }
}
extern "C" {
#else
enum __x_ABI_CWindows_CNetworking_CHostNameType {
    HostNameType_DomainName = 0,
    HostNameType_Ipv4 = 1,
    HostNameType_Ipv6 = 2,
    HostNameType_Bluetooth = 3
};
#ifdef WIDL_using_Windows_Networking
#define HostNameType __x_ABI_CWindows_CNetworking_CHostNameType
#endif /* WIDL_using_Windows_Networking */
#endif

#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */
/*****************************************************************************
 * IHostName interface
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef ____x_ABI_CWindows_CNetworking_CIHostName_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CIHostName_INTERFACE_DEFINED__

DEFINE_GUID(IID___x_ABI_CWindows_CNetworking_CIHostName, 0xbf8ecaad, 0xed96, 0x49a7, 0x90,0x84, 0xd4,0x16,0xca,0xe8,0x8d,0xcb);
#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Networking {
            MIDL_INTERFACE("bf8ecaad-ed96-49a7-9084-d416cae88dcb")
            IHostName : public IInspectable
            {
                virtual HRESULT STDMETHODCALLTYPE get_IPInformation(
                    IIPInformation **value) = 0;

                virtual HRESULT STDMETHODCALLTYPE get_RawName(
                    HSTRING *value) = 0;

                virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                    HSTRING *value) = 0;

                virtual HRESULT STDMETHODCALLTYPE get_CanonicalName(
                    HSTRING *value) = 0;

                virtual HRESULT STDMETHODCALLTYPE get_Type(
                    enum HostNameType *value) = 0;

                virtual HRESULT STDMETHODCALLTYPE IsEqual(
                    IHostName *hostName,
                    boolean *equal) = 0;

            };
        }
    }
}
extern "C" {
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(__x_ABI_CWindows_CNetworking_CIHostName, 0xbf8ecaad, 0xed96, 0x49a7, 0x90,0x84, 0xd4,0x16,0xca,0xe8,0x8d,0xcb)
#endif
#else
typedef struct __x_ABI_CWindows_CNetworking_CIHostNameVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        __x_ABI_CWindows_CNetworking_CIHostName *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        __x_ABI_CWindows_CNetworking_CIHostName *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        __x_ABI_CWindows_CNetworking_CIHostName *This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        __x_ABI_CWindows_CNetworking_CIHostName *This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        __x_ABI_CWindows_CNetworking_CIHostName *This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        __x_ABI_CWindows_CNetworking_CIHostName *This,
        TrustLevel *trustLevel);

    /*** IHostName methods ***/
    HRESULT (STDMETHODCALLTYPE *get_IPInformation)(
        __x_ABI_CWindows_CNetworking_CIHostName *This,
        __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation **value);

    HRESULT (STDMETHODCALLTYPE *get_RawName)(
        __x_ABI_CWindows_CNetworking_CIHostName *This,
        HSTRING *value);

    HRESULT (STDMETHODCALLTYPE *get_DisplayName)(
        __x_ABI_CWindows_CNetworking_CIHostName *This,
        HSTRING *value);

    HRESULT (STDMETHODCALLTYPE *get_CanonicalName)(
        __x_ABI_CWindows_CNetworking_CIHostName *This,
        HSTRING *value);

    HRESULT (STDMETHODCALLTYPE *get_Type)(
        __x_ABI_CWindows_CNetworking_CIHostName *This,
        enum __x_ABI_CWindows_CNetworking_CHostNameType *value);

    HRESULT (STDMETHODCALLTYPE *IsEqual)(
        __x_ABI_CWindows_CNetworking_CIHostName *This,
        __x_ABI_CWindows_CNetworking_CIHostName *hostName,
        boolean *equal);

    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CIHostNameVtbl;

interface __x_ABI_CWindows_CNetworking_CIHostName {
    CONST_VTBL __x_ABI_CWindows_CNetworking_CIHostNameVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define __x_ABI_CWindows_CNetworking_CIHostName_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define __x_ABI_CWindows_CNetworking_CIHostName_AddRef(This) (This)->lpVtbl->AddRef(This)
#define __x_ABI_CWindows_CNetworking_CIHostName_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define __x_ABI_CWindows_CNetworking_CIHostName_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define __x_ABI_CWindows_CNetworking_CIHostName_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define __x_ABI_CWindows_CNetworking_CIHostName_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
/*** IHostName methods ***/
#define __x_ABI_CWindows_CNetworking_CIHostName_get_IPInformation(This,value) (This)->lpVtbl->get_IPInformation(This,value)
#define __x_ABI_CWindows_CNetworking_CIHostName_get_RawName(This,value) (This)->lpVtbl->get_RawName(This,value)
#define __x_ABI_CWindows_CNetworking_CIHostName_get_DisplayName(This,value) (This)->lpVtbl->get_DisplayName(This,value)
#define __x_ABI_CWindows_CNetworking_CIHostName_get_CanonicalName(This,value) (This)->lpVtbl->get_CanonicalName(This,value)
#define __x_ABI_CWindows_CNetworking_CIHostName_get_Type(This,value) (This)->lpVtbl->get_Type(This,value)
#define __x_ABI_CWindows_CNetworking_CIHostName_IsEqual(This,hostName,equal) (This)->lpVtbl->IsEqual(This,hostName,equal)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT __x_ABI_CWindows_CNetworking_CIHostName_QueryInterface(__x_ABI_CWindows_CNetworking_CIHostName* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG __x_ABI_CWindows_CNetworking_CIHostName_AddRef(__x_ABI_CWindows_CNetworking_CIHostName* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG __x_ABI_CWindows_CNetworking_CIHostName_Release(__x_ABI_CWindows_CNetworking_CIHostName* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static FORCEINLINE HRESULT __x_ABI_CWindows_CNetworking_CIHostName_GetIids(__x_ABI_CWindows_CNetworking_CIHostName* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static FORCEINLINE HRESULT __x_ABI_CWindows_CNetworking_CIHostName_GetRuntimeClassName(__x_ABI_CWindows_CNetworking_CIHostName* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static FORCEINLINE HRESULT __x_ABI_CWindows_CNetworking_CIHostName_GetTrustLevel(__x_ABI_CWindows_CNetworking_CIHostName* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
/*** IHostName methods ***/
static FORCEINLINE HRESULT __x_ABI_CWindows_CNetworking_CIHostName_get_IPInformation(__x_ABI_CWindows_CNetworking_CIHostName* This,__x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation **value) {
    return This->lpVtbl->get_IPInformation(This,value);
}
static FORCEINLINE HRESULT __x_ABI_CWindows_CNetworking_CIHostName_get_RawName(__x_ABI_CWindows_CNetworking_CIHostName* This,HSTRING *value) {
    return This->lpVtbl->get_RawName(This,value);
}
static FORCEINLINE HRESULT __x_ABI_CWindows_CNetworking_CIHostName_get_DisplayName(__x_ABI_CWindows_CNetworking_CIHostName* This,HSTRING *value) {
    return This->lpVtbl->get_DisplayName(This,value);
}
static FORCEINLINE HRESULT __x_ABI_CWindows_CNetworking_CIHostName_get_CanonicalName(__x_ABI_CWindows_CNetworking_CIHostName* This,HSTRING *value) {
    return This->lpVtbl->get_CanonicalName(This,value);
}
static FORCEINLINE HRESULT __x_ABI_CWindows_CNetworking_CIHostName_get_Type(__x_ABI_CWindows_CNetworking_CIHostName* This,enum __x_ABI_CWindows_CNetworking_CHostNameType *value) {
    return This->lpVtbl->get_Type(This,value);
}
static FORCEINLINE HRESULT __x_ABI_CWindows_CNetworking_CIHostName_IsEqual(__x_ABI_CWindows_CNetworking_CIHostName* This,__x_ABI_CWindows_CNetworking_CIHostName *hostName,boolean *equal) {
    return This->lpVtbl->IsEqual(This,hostName,equal);
}
#endif
#ifdef WIDL_using_Windows_Networking
#define IID_IHostName IID___x_ABI_CWindows_CNetworking_CIHostName
#define IHostNameVtbl __x_ABI_CWindows_CNetworking_CIHostNameVtbl
#define IHostName __x_ABI_CWindows_CNetworking_CIHostName
#define IHostName_QueryInterface __x_ABI_CWindows_CNetworking_CIHostName_QueryInterface
#define IHostName_AddRef __x_ABI_CWindows_CNetworking_CIHostName_AddRef
#define IHostName_Release __x_ABI_CWindows_CNetworking_CIHostName_Release
#define IHostName_GetIids __x_ABI_CWindows_CNetworking_CIHostName_GetIids
#define IHostName_GetRuntimeClassName __x_ABI_CWindows_CNetworking_CIHostName_GetRuntimeClassName
#define IHostName_GetTrustLevel __x_ABI_CWindows_CNetworking_CIHostName_GetTrustLevel
#define IHostName_get_IPInformation __x_ABI_CWindows_CNetworking_CIHostName_get_IPInformation
#define IHostName_get_RawName __x_ABI_CWindows_CNetworking_CIHostName_get_RawName
#define IHostName_get_DisplayName __x_ABI_CWindows_CNetworking_CIHostName_get_DisplayName
#define IHostName_get_CanonicalName __x_ABI_CWindows_CNetworking_CIHostName_get_CanonicalName
#define IHostName_get_Type __x_ABI_CWindows_CNetworking_CIHostName_get_Type
#define IHostName_IsEqual __x_ABI_CWindows_CNetworking_CIHostName_IsEqual
#endif /* WIDL_using_Windows_Networking */
#endif

#endif

#endif  /* ____x_ABI_CWindows_CNetworking_CIHostName_INTERFACE_DEFINED__ */
#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */

/*****************************************************************************
 * IHostNameFactory interface
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef ____x_ABI_CWindows_CNetworking_CIHostNameFactory_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CIHostNameFactory_INTERFACE_DEFINED__

DEFINE_GUID(IID___x_ABI_CWindows_CNetworking_CIHostNameFactory, 0x458c23ed, 0x712f, 0x4576, 0xad,0xf1, 0xc2,0x0b,0x2c,0x64,0x35,0x58);
#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Networking {
            MIDL_INTERFACE("458c23ed-712f-4576-adf1-c20b2c643558")
            IHostNameFactory : public IInspectable
            {
                virtual HRESULT STDMETHODCALLTYPE CreateHostName(
                    HSTRING hostname,
                    IHostName **value) = 0;

            };
        }
    }
}
extern "C" {
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(__x_ABI_CWindows_CNetworking_CIHostNameFactory, 0x458c23ed, 0x712f, 0x4576, 0xad,0xf1, 0xc2,0x0b,0x2c,0x64,0x35,0x58)
#endif
#else
typedef struct __x_ABI_CWindows_CNetworking_CIHostNameFactoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        __x_ABI_CWindows_CNetworking_CIHostNameFactory *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        __x_ABI_CWindows_CNetworking_CIHostNameFactory *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        __x_ABI_CWindows_CNetworking_CIHostNameFactory *This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        __x_ABI_CWindows_CNetworking_CIHostNameFactory *This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        __x_ABI_CWindows_CNetworking_CIHostNameFactory *This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        __x_ABI_CWindows_CNetworking_CIHostNameFactory *This,
        TrustLevel *trustLevel);

    /*** IHostNameFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateHostName)(
        __x_ABI_CWindows_CNetworking_CIHostNameFactory *This,
        HSTRING hostname,
        __x_ABI_CWindows_CNetworking_CIHostName **value);

    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CIHostNameFactoryVtbl;

interface __x_ABI_CWindows_CNetworking_CIHostNameFactory {
    CONST_VTBL __x_ABI_CWindows_CNetworking_CIHostNameFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define __x_ABI_CWindows_CNetworking_CIHostNameFactory_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define __x_ABI_CWindows_CNetworking_CIHostNameFactory_AddRef(This) (This)->lpVtbl->AddRef(This)
#define __x_ABI_CWindows_CNetworking_CIHostNameFactory_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define __x_ABI_CWindows_CNetworking_CIHostNameFactory_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define __x_ABI_CWindows_CNetworking_CIHostNameFactory_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define __x_ABI_CWindows_CNetworking_CIHostNameFactory_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
/*** IHostNameFactory methods ***/
#define __x_ABI_CWindows_CNetworking_CIHostNameFactory_CreateHostName(This,hostname,value) (This)->lpVtbl->CreateHostName(This,hostname,value)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT __x_ABI_CWindows_CNetworking_CIHostNameFactory_QueryInterface(__x_ABI_CWindows_CNetworking_CIHostNameFactory* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG __x_ABI_CWindows_CNetworking_CIHostNameFactory_AddRef(__x_ABI_CWindows_CNetworking_CIHostNameFactory* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG __x_ABI_CWindows_CNetworking_CIHostNameFactory_Release(__x_ABI_CWindows_CNetworking_CIHostNameFactory* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static FORCEINLINE HRESULT __x_ABI_CWindows_CNetworking_CIHostNameFactory_GetIids(__x_ABI_CWindows_CNetworking_CIHostNameFactory* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static FORCEINLINE HRESULT __x_ABI_CWindows_CNetworking_CIHostNameFactory_GetRuntimeClassName(__x_ABI_CWindows_CNetworking_CIHostNameFactory* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static FORCEINLINE HRESULT __x_ABI_CWindows_CNetworking_CIHostNameFactory_GetTrustLevel(__x_ABI_CWindows_CNetworking_CIHostNameFactory* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
/*** IHostNameFactory methods ***/
static FORCEINLINE HRESULT __x_ABI_CWindows_CNetworking_CIHostNameFactory_CreateHostName(__x_ABI_CWindows_CNetworking_CIHostNameFactory* This,HSTRING hostname,__x_ABI_CWindows_CNetworking_CIHostName **value) {
    return This->lpVtbl->CreateHostName(This,hostname,value);
}
#endif
#ifdef WIDL_using_Windows_Networking
#define IID_IHostNameFactory IID___x_ABI_CWindows_CNetworking_CIHostNameFactory
#define IHostNameFactoryVtbl __x_ABI_CWindows_CNetworking_CIHostNameFactoryVtbl
#define IHostNameFactory __x_ABI_CWindows_CNetworking_CIHostNameFactory
#define IHostNameFactory_QueryInterface __x_ABI_CWindows_CNetworking_CIHostNameFactory_QueryInterface
#define IHostNameFactory_AddRef __x_ABI_CWindows_CNetworking_CIHostNameFactory_AddRef
#define IHostNameFactory_Release __x_ABI_CWindows_CNetworking_CIHostNameFactory_Release
#define IHostNameFactory_GetIids __x_ABI_CWindows_CNetworking_CIHostNameFactory_GetIids
#define IHostNameFactory_GetRuntimeClassName __x_ABI_CWindows_CNetworking_CIHostNameFactory_GetRuntimeClassName
#define IHostNameFactory_GetTrustLevel __x_ABI_CWindows_CNetworking_CIHostNameFactory_GetTrustLevel
#define IHostNameFactory_CreateHostName __x_ABI_CWindows_CNetworking_CIHostNameFactory_CreateHostName
#endif /* WIDL_using_Windows_Networking */
#endif

#endif

#endif  /* ____x_ABI_CWindows_CNetworking_CIHostNameFactory_INTERFACE_DEFINED__ */
#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */

/*****************************************************************************
 * IHostNameStatics interface
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef ____x_ABI_CWindows_CNetworking_CIHostNameStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CIHostNameStatics_INTERFACE_DEFINED__

DEFINE_GUID(IID___x_ABI_CWindows_CNetworking_CIHostNameStatics, 0xf68cd4bf, 0xa388, 0x4e8b, 0x91,0xea, 0x54,0xdd,0x6d,0xd9,0x01,0xc0);
#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Networking {
            MIDL_INTERFACE("f68cd4bf-a388-4e8b-91ea-54dd6dd901c0")
            IHostNameStatics : public IInspectable
            {
                virtual HRESULT STDMETHODCALLTYPE Compare(
                    HSTRING value1,
                    HSTRING value2,
                    INT32 *result) = 0;

            };
        }
    }
}
extern "C" {
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(__x_ABI_CWindows_CNetworking_CIHostNameStatics, 0xf68cd4bf, 0xa388, 0x4e8b, 0x91,0xea, 0x54,0xdd,0x6d,0xd9,0x01,0xc0)
#endif
#else
typedef struct __x_ABI_CWindows_CNetworking_CIHostNameStaticsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        __x_ABI_CWindows_CNetworking_CIHostNameStatics *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        __x_ABI_CWindows_CNetworking_CIHostNameStatics *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        __x_ABI_CWindows_CNetworking_CIHostNameStatics *This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        __x_ABI_CWindows_CNetworking_CIHostNameStatics *This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        __x_ABI_CWindows_CNetworking_CIHostNameStatics *This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        __x_ABI_CWindows_CNetworking_CIHostNameStatics *This,
        TrustLevel *trustLevel);

    /*** IHostNameStatics methods ***/
    HRESULT (STDMETHODCALLTYPE *Compare)(
        __x_ABI_CWindows_CNetworking_CIHostNameStatics *This,
        HSTRING value1,
        HSTRING value2,
        INT32 *result);

    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CIHostNameStaticsVtbl;

interface __x_ABI_CWindows_CNetworking_CIHostNameStatics {
    CONST_VTBL __x_ABI_CWindows_CNetworking_CIHostNameStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define __x_ABI_CWindows_CNetworking_CIHostNameStatics_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define __x_ABI_CWindows_CNetworking_CIHostNameStatics_AddRef(This) (This)->lpVtbl->AddRef(This)
#define __x_ABI_CWindows_CNetworking_CIHostNameStatics_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define __x_ABI_CWindows_CNetworking_CIHostNameStatics_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define __x_ABI_CWindows_CNetworking_CIHostNameStatics_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define __x_ABI_CWindows_CNetworking_CIHostNameStatics_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
/*** IHostNameStatics methods ***/
#define __x_ABI_CWindows_CNetworking_CIHostNameStatics_Compare(This,value1,value2,result) (This)->lpVtbl->Compare(This,value1,value2,result)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT __x_ABI_CWindows_CNetworking_CIHostNameStatics_QueryInterface(__x_ABI_CWindows_CNetworking_CIHostNameStatics* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG __x_ABI_CWindows_CNetworking_CIHostNameStatics_AddRef(__x_ABI_CWindows_CNetworking_CIHostNameStatics* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG __x_ABI_CWindows_CNetworking_CIHostNameStatics_Release(__x_ABI_CWindows_CNetworking_CIHostNameStatics* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static FORCEINLINE HRESULT __x_ABI_CWindows_CNetworking_CIHostNameStatics_GetIids(__x_ABI_CWindows_CNetworking_CIHostNameStatics* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static FORCEINLINE HRESULT __x_ABI_CWindows_CNetworking_CIHostNameStatics_GetRuntimeClassName(__x_ABI_CWindows_CNetworking_CIHostNameStatics* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static FORCEINLINE HRESULT __x_ABI_CWindows_CNetworking_CIHostNameStatics_GetTrustLevel(__x_ABI_CWindows_CNetworking_CIHostNameStatics* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
/*** IHostNameStatics methods ***/
static FORCEINLINE HRESULT __x_ABI_CWindows_CNetworking_CIHostNameStatics_Compare(__x_ABI_CWindows_CNetworking_CIHostNameStatics* This,HSTRING value1,HSTRING value2,INT32 *result) {
    return This->lpVtbl->Compare(This,value1,value2,result);
}
#endif
#ifdef WIDL_using_Windows_Networking
#define IID_IHostNameStatics IID___x_ABI_CWindows_CNetworking_CIHostNameStatics
#define IHostNameStaticsVtbl __x_ABI_CWindows_CNetworking_CIHostNameStaticsVtbl
#define IHostNameStatics __x_ABI_CWindows_CNetworking_CIHostNameStatics
#define IHostNameStatics_QueryInterface __x_ABI_CWindows_CNetworking_CIHostNameStatics_QueryInterface
#define IHostNameStatics_AddRef __x_ABI_CWindows_CNetworking_CIHostNameStatics_AddRef
#define IHostNameStatics_Release __x_ABI_CWindows_CNetworking_CIHostNameStatics_Release
#define IHostNameStatics_GetIids __x_ABI_CWindows_CNetworking_CIHostNameStatics_GetIids
#define IHostNameStatics_GetRuntimeClassName __x_ABI_CWindows_CNetworking_CIHostNameStatics_GetRuntimeClassName
#define IHostNameStatics_GetTrustLevel __x_ABI_CWindows_CNetworking_CIHostNameStatics_GetTrustLevel
#define IHostNameStatics_Compare __x_ABI_CWindows_CNetworking_CIHostNameStatics_Compare
#endif /* WIDL_using_Windows_Networking */
#endif

#endif

#endif  /* ____x_ABI_CWindows_CNetworking_CIHostNameStatics_INTERFACE_DEFINED__ */
#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */

/*
 * Class Windows.Networking.HostName
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Networking_HostName_DEFINED
#define RUNTIMECLASS_Windows_Networking_HostName_DEFINED
#if !defined(_MSC_VER) && !defined(__MINGW32__)
static const WCHAR RuntimeClass_Windows_Networking_HostName[] = {'W','i','n','d','o','w','s','.','N','e','t','w','o','r','k','i','n','g','.','H','o','s','t','N','a','m','e',0};
#elif defined(__GNUC__) && !defined(__cplusplus)
const DECLSPEC_SELECTANY WCHAR RuntimeClass_Windows_Networking_HostName[] = L"Windows.Networking.HostName";
#else
extern const DECLSPEC_SELECTANY WCHAR RuntimeClass_Windows_Networking_HostName[] = {'W','i','n','d','o','w','s','.','N','e','t','w','o','r','k','i','n','g','.','H','o','s','t','N','a','m','e',0};
#endif
#endif /* RUNTIMECLASS_Windows_Networking_HostName_DEFINED */
#endif /* WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000 */

/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER HSTRING_UserSize     (ULONG *, ULONG, HSTRING *);
unsigned char * __RPC_USER HSTRING_UserMarshal  (ULONG *, unsigned char *, HSTRING *);
unsigned char * __RPC_USER HSTRING_UserUnmarshal(ULONG *, unsigned char *, HSTRING *);
void            __RPC_USER HSTRING_UserFree     (ULONG *, HSTRING *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __windows_networking_h__ */
