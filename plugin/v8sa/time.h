#ifndef __V8SA_PLUGIN_TIME_H__
#define __V8SA_PLUGIN_TIME_H__

extern "C" {
#include <time.h>
}

namespace v8sa {

time_t microTime();

}

#endif