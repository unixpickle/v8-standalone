#ifndef __V8SA_PLUGIN_SOCKET_H__
#define __V8SA_PLUGIN_SOCKET_H__

namespace v8sa {

  namespace Socket {
    
    typedef uint64_t Socket;
    const Socket invalid = 0;
    
    Socket create();
    bool bind(Socket s, int port);
    bool listen(Socket s, int backlog);
    bool accept(Socket s, Socket & sOut);
    bool connect(Socket s, const char * host, const char * port);
    bool shutdown(Socket s);
    int write(Socket s, const void * buf, int len);
    bool recv(Socket s, void * buf, int len);
    bool setReuse(Socket s);
    int lastError();
    
  }
  
}

#endif