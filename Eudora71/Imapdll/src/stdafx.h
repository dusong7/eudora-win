// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__2643AF57_E81A_11D1_90A9_00805F9B8439__INCLUDED_)
#define AFX_STDAFX_H__2643AF57_E81A_11D1_90A9_00805F9B8439__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

// Turn on leak checking with malloc (must be defined before stdlib.h is included)
#define _CRTDBG_MAP_ALLOC

#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxole.h>         // MFC OLE classes
#include <afxodlgs.h>       // MFC OLE dialog classes
#include <afxdisp.h>        // MFC OLE automation classes
#endif // _AFX_NO_OLE_SUPPORT


#ifndef _AFX_NO_DB_SUPPORT
#include <afxdb.h>			// MFC ODBC database classes
#endif // _AFX_NO_DB_SUPPORT

#ifndef _AFX_NO_DAO_SUPPORT
#include <afxdao.h>			// MFC DAO database classes
#endif // _AFX_NO_DAO_SUPPORT

#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT

#include "qcassert.h"		// ASSERT/VERIFY logging

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__2643AF57_E81A_11D1_90A9_00805F9B8439__INCLUDED_)
