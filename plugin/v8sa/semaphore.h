#include <stdint.h>

namespace v8sa {

class Semaphore {
public:
  Semaphore(int count);
  ~Semaphore();
  
  void signal();
  void wait();
  bool waitFor(uint64_t time);
};

}