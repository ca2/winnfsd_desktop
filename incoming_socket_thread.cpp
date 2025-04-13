#include "framework.h"
#include "application.h"
#include "incoming_socket.h"
#include "incoming_socket_thread.h"
#include "socket.h"
#include "acme/filesystem/filesystem/file_context.h"


namespace app_simple_winnfsd_desktop
{


   incoming_socket_thread::incoming_socket_thread()
   {

      m_iSsl = 1;

   }

   incoming_socket_thread::~incoming_socket_thread()
   {


   }


   void incoming_socket_thread::initialize(::particle * pparticle)
   {

      //auto estatus =
      //
      ::httpd::incoming_socket_thread::initialize(pparticle);


      m_typeIncomingSocket = ::type < ::app_simple_winnfsd_desktop::incoming_socket >();


      m_strIp = "127.0.0.1";

      //{

      //   auto strCat = file()->safe_get_string("matter://certificate/localhost.ca2.software.cat");

      //   if (strCat.has_character())
      //   {

      //      m_strCat = "cat://" + strCat;
      //      m_strCipherList = "ECDHE-RSA-AES256-SHA384:ECDHE-RSA-AES256-SHA:ECDHE-RSA-AES128-SHA:ECDHE-RSA-RC4-SHA:DHE-RSA-AES256-SHA:DHE-RSA-AES128-SHA:RSA:SHA:3DES:!aNULL:!eNULL:!EXP:!LOW:!MD5:@STRENGTH";

      //   }

      //}

      //m_iPortMinimum = (::networking::port_t)443;
      //m_iPortMaximum = (::networking::port_t)443;

#ifdef LINUX
      m_iPortMinimum = (::networking::port_t)8080;
      m_iPortMaximum = (::networking::port_t)8080;
#else
      m_iPortMinimum = (::networking::port_t)80;
      m_iPortMaximum = (::networking::port_t)80;
#endif

      branch();

//      if (!estatus)
//      {
//
//         return estatus;
//
//      }
//
//      return estatus;

   }



   void incoming_socket_thread::install_message_routing(::channel * pchannel)
   {

   }

   //::pointer < ::netserver::socket_handler > incoming_socket_thread::create_socket_handler()
   //{

   //   return __allocate ::install::socket_handler();


   //}


   //::pointer < ::sockets::listen_socket_base > incoming_socket_thread::create_listen_socket()
   //{

   //   return __allocate ::sockets::listen_socket < socket >();

   //}


   //::thread * create_new_socket_thread(::object* pparticle)
   //{

   //   auto pthreadSsl = pparticle->__create_new < incoming_socket_thread >();

   //   //pthreadSsl->initialize_socket_thread(pparticle);

   //   pthreadSsl->m_strIp = "127.0.0.1";

   //   //auto pcontext = pparticle->m_papplication;

   //   //pthreadSsl->m_strCat = m_papplication->defer_process_matter_path(directory()->matter("appinstaller.cat"));

   //   //auto pfolder = pparticle->file()->resource_folder();

   //   //if (pfolder)
   //   {

   //      auto pfile = pparticle->file()->get_reader("matter://api/localwebserver.cat");

   //      if (pfile.ok())
   //      {

   //         string strCat;

   //         strCat = pfile->full_string();

   //         if (strCat)
   //         {

   //            pthreadSsl->m_strCat = "cat://" + strCat;
   //            pthreadSsl->m_strCipherList = "ECDHE-RSA-AES256-SHA384:ECDHE-RSA-AES256-SHA:ECDHE-RSA-AES128-SHA:ECDHE-RSA-RC4-SHA:DHE-RSA-AES256-SHA:DHE-RSA-AES128-SHA:RSA:SHA:3DES:!aNULL:!eNULL:!EXP:!LOW:!MD5:@STRENGTH";

   //         }

   //      }

   //   }

   //   pthreadSsl->m_iPortMinimum = (::networking::port_t)2000;
   //   pthreadSsl->m_iPortMaximum = (::networking::port_t)2000;

   //   pthreadSsl->branch();

   //   return pthreadSsl;

   //}


} // namespace app_simple_winnfsd_desktop


