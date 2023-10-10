timer
=====

```c
#include "timer.h"

///

timer::set_timeout st{[](){std::cout<<"tick...\n";}, std::chrono::milliseconds(100)};

timer::interval inter{[](){std::cout<<"tack...\n";}, std::chrono::milliseconds(100)};


```
