#include "framework.h"
#include "main_frame.h"


namespace app_simple_http_file_server
{


   main_frame::main_frame()
   {

//      set_bitmap_source("Simple Drawing!!");

      //m_bDefaultCreateToolbar = false;

      window_enable_full_screen();

   }


   main_frame::~main_frame()
   {

   }


   ::pointer < ::experience::frame > main_frame::frame_experience()
   {

      auto pframe = ::simple_main_frame::frame_experience(nullptr, "022", "LightBlue");

      return pframe;

   }


//   bool main_frame::has_pending_graphical_update()
//   {
//
//      return ::simple_frame_window::has_pending_graphical_update();
//
//   }


   //bool main_frame::get_translucency(::user::enum_translucency & etranslucency, ::enum_element eelement, ::user::style_context * pcontext)
   //{

   //   if (m_bExplicitTranslucency)
   //   {

   //      etranslucency = m_etranslucency;

   //      return true;

   //   }

   //   //if (userstyle() != NULL)
   //   //{

   //   //   if (m_puserstyle->_001GetMainFrameTranslucency(etranslucency))
   //   //      return true;

   //   //}
   //   //etranslucency = ::user::e_translucency_present;

   //   ////      etranslucency = ::user::e_translucency_none;

   //   //return true;

   //   return ::user::style::get_translucency(etranslucency, eelement, pcontext);

   //}


} // namespace app_simple_http_file_server







