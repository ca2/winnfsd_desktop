#pragma once


#include "acme/handler/item.h"
#include "base/user/user/document.h"


namespace app_simple_winnfsd_desktop
{


   class CLASS_DECL_APP_SIMPLE_WINNFSD_DESKTOP main_document :
      public ::user::document
   {
   public:


      main_document();
	   ~main_document() override;


      bool on_new_document() override;
      virtual bool on_open_document(const ::payload & payloadFile) override;

#ifdef _DEBUG
      virtual long long increment_reference_count() override;
      virtual long long decrement_reference_count() override;
#endif

      //virtual void write(::binary_stream & stream) const override;

      void network_interface_discovery(::collection::index iItem);

   };


} // namespace app_simple_winnfsd_desktop



