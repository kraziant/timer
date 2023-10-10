timer
=====

Single-header C++11 lib. Was inpsired by the [timercpp](https://github.com/99x/timercpp) library.

Made it just-for-fun. 

```c
#include "timer.h"

///

timer::set_timeout st{[](){std::cout<<"tick...\n";}, std::chrono::milliseconds(100)};
// wait 100 ms and tick... 

timer::interval inter{[](){std::cout<<"tack...\n";}, std::chrono::milliseconds(100)};
//tack... every 100 ms since creation

```
