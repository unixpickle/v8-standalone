#include <stdint.h>

namespace v8sa {

class Mutex {
public:
  Mutex();
  ~Mutex();
  
  void lock();
  void unlock();
  bool tryLock();
};

}