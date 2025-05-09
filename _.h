#pragma once


#include "base/_.h"


#if defined(_app_simple_winnfsd_desktop_project)
#define CLASS_DECL_APP_SIMPLE_WINNFSD_DESKTOP  CLASS_DECL_EXPORT
#else
#define CLASS_DECL_APP_SIMPLE_WINNFSD_DESKTOP  CLASS_DECL_IMPORT
#endif


namespace app_simple_winnfsd_desktop
{

   
   class application;
   class tab_impact;
   class main_document;


   class incoming_socket_thread;

   
   class impact;
   class edit_impact;
   class main_impact;
   class document;


} // namespace app_simple_winnfsd_desktop



