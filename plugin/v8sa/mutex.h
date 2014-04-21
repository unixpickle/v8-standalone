#ifndef __V8SA_PLUGIN_MUTEX_H__
#define __V8SA_PLUGIN_MUTEX_H__

#include <stdint.h>

namespace v8sa {

class Mutex {
private:
  void * userData;

public:
  Mutex();
  ~Mutex();
  
  void setup(bool recursive = 0);
  
  void lock();
  void unlock();
  bool tryLock();
};

}

#endif
