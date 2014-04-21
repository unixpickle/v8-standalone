#ifndef __V8SA_PLUGIN_CONDITION_H__
#define __V8SA_PLUGIN_CONDITION_H__

#include <v8sa/mutex.h>

namespace v8sa {

class Condition {
private:
  void * userData;
public:
  Condition();
  ~Condition();
  
  void signal();
  void broadcast();
  void wait(Mutex & mutex);
  bool waitFor(Mutex & mutex, uint64_t usec);
};

}

#endif
