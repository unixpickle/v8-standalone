#ifndef __V8SA_PLUGIN_SEMAPHORE_H__
#define __V8SA_PLUGIN_SEMAPHORE_H__
  
#include <stdint.h>

namespace v8sa {

class Semaphore {
private:
  void * userData;
  
public:
  Semaphore(int count);
  ~Semaphore();
  
  void signal();
  void wait();
  bool waitFor(uint64_t time);
};

}

#endif