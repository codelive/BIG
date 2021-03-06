// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/client_cpptoc.h"
#include "libcef_dll/cpptoc/context_menu_handler_cpptoc.h"
#include "libcef_dll/cpptoc/dialog_handler_cpptoc.h"
#include "libcef_dll/cpptoc/display_handler_cpptoc.h"
#include "libcef_dll/cpptoc/download_handler_cpptoc.h"
#include "libcef_dll/cpptoc/focus_handler_cpptoc.h"
#include "libcef_dll/cpptoc/geolocation_handler_cpptoc.h"
#include "libcef_dll/cpptoc/jsdialog_handler_cpptoc.h"
#include "libcef_dll/cpptoc/keyboard_handler_cpptoc.h"
#include "libcef_dll/cpptoc/life_span_handler_cpptoc.h"
#include "libcef_dll/cpptoc/load_handler_cpptoc.h"
#include "libcef_dll/cpptoc/render_handler_cpptoc.h"
#include "libcef_dll/cpptoc/request_handler_cpptoc.h"
#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/process_message_ctocpp.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

struct _cef_context_menu_handler_t* CEF_CALLBACK client_get_context_menu_handler(
    struct _cef_client_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefContextMenuHandler> _retval = CefClientCppToC::Get(
      self)->GetContextMenuHandler();

  // Return type: refptr_same
  return CefContextMenuHandlerCppToC::Wrap(_retval);
}

struct _cef_dialog_handler_t* CEF_CALLBACK client_get_dialog_handler(
    struct _cef_client_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefDialogHandler> _retval = CefClientCppToC::Get(
      self)->GetDialogHandler();

  // Return type: refptr_same
  return CefDialogHandlerCppToC::Wrap(_retval);
}

struct _cef_display_handler_t* CEF_CALLBACK client_get_display_handler(
    struct _cef_client_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefDisplayHandler> _retval = CefClientCppToC::Get(
      self)->GetDisplayHandler();

  // Return type: refptr_same
  return CefDisplayHandlerCppToC::Wrap(_retval);
}

struct _cef_download_handler_t* CEF_CALLBACK client_get_download_handler(
    struct _cef_client_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefDownloadHandler> _retval = CefClientCppToC::Get(
      self)->GetDownloadHandler();

  // Return type: refptr_same
  return CefDownloadHandlerCppToC::Wrap(_retval);
}

struct _cef_focus_handler_t* CEF_CALLBACK client_get_focus_handler(
    struct _cef_client_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefFocusHandler> _retval = CefClientCppToC::Get(
      self)->GetFocusHandler();

  // Return type: refptr_same
  return CefFocusHandlerCppToC::Wrap(_retval);
}

struct _cef_geolocation_handler_t* CEF_CALLBACK client_get_geolocation_handler(
    struct _cef_client_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefGeolocationHandler> _retval = CefClientCppToC::Get(
      self)->GetGeolocationHandler();

  // Return type: refptr_same
  return CefGeolocationHandlerCppToC::Wrap(_retval);
}

struct _cef_jsdialog_handler_t* CEF_CALLBACK client_get_jsdialog_handler(
    struct _cef_client_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefJSDialogHandler> _retval = CefClientCppToC::Get(
      self)->GetJSDialogHandler();

  // Return type: refptr_same
  return CefJSDialogHandlerCppToC::Wrap(_retval);
}

struct _cef_keyboard_handler_t* CEF_CALLBACK client_get_keyboard_handler(
    struct _cef_client_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefKeyboardHandler> _retval = CefClientCppToC::Get(
      self)->GetKeyboardHandler();

  // Return type: refptr_same
  return CefKeyboardHandlerCppToC::Wrap(_retval);
}

struct _cef_life_span_handler_t* CEF_CALLBACK client_get_life_span_handler(
    struct _cef_client_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefLifeSpanHandler> _retval = CefClientCppToC::Get(
      self)->GetLifeSpanHandler();

  // Return type: refptr_same
  return CefLifeSpanHandlerCppToC::Wrap(_retval);
}

struct _cef_load_handler_t* CEF_CALLBACK client_get_load_handler(
    struct _cef_client_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefLoadHandler> _retval = CefClientCppToC::Get(
      self)->GetLoadHandler();

  // Return type: refptr_same
  return CefLoadHandlerCppToC::Wrap(_retval);
}

struct _cef_render_handler_t* CEF_CALLBACK client_get_render_handler(
    struct _cef_client_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefRenderHandler> _retval = CefClientCppToC::Get(
      self)->GetRenderHandler();

  // Return type: refptr_same
  return CefRenderHandlerCppToC::Wrap(_retval);
}

struct _cef_request_handler_t* CEF_CALLBACK client_get_request_handler(
    struct _cef_client_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefRequestHandler> _retval = CefClientCppToC::Get(
      self)->GetRequestHandler();

  // Return type: refptr_same
  return CefRequestHandlerCppToC::Wrap(_retval);
}

int CEF_CALLBACK client_on_process_message_received(struct _cef_client_t* self,
    cef_browser_t* browser, enum cef_process_id_t source_process,
    struct _cef_process_message_t* message) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return 0;
  // Verify param: message; type: refptr_diff
  DCHECK(message);
  if (!message)
    return 0;

  // Execute
  bool _retval = CefClientCppToC::Get(self)->OnProcessMessageReceived(
      CefBrowserCToCpp::Wrap(browser),
      source_process,
      CefProcessMessageCToCpp::Wrap(message));

  // Return type: bool
  return _retval;
}


// CONSTRUCTOR - Do not edit by hand.

CefClientCppToC::CefClientCppToC(CefClient* cls)
    : CefCppToC<CefClientCppToC, CefClient, cef_client_t>(cls) {
  struct_.struct_.get_context_menu_handler = client_get_context_menu_handler;
  struct_.struct_.get_dialog_handler = client_get_dialog_handler;
  struct_.struct_.get_display_handler = client_get_display_handler;
  struct_.struct_.get_download_handler = client_get_download_handler;
  struct_.struct_.get_focus_handler = client_get_focus_handler;
  struct_.struct_.get_geolocation_handler = client_get_geolocation_handler;
  struct_.struct_.get_jsdialog_handler = client_get_jsdialog_handler;
  struct_.struct_.get_keyboard_handler = client_get_keyboard_handler;
  struct_.struct_.get_life_span_handler = client_get_life_span_handler;
  struct_.struct_.get_load_handler = client_get_load_handler;
  struct_.struct_.get_render_handler = client_get_render_handler;
  struct_.struct_.get_request_handler = client_get_request_handler;
  struct_.struct_.on_process_message_received =
      client_on_process_message_received;
}

#ifndef NDEBUG
template<> long CefCppToC<CefClientCppToC, CefClient,
    cef_client_t>::DebugObjCt = 0;
#endif

