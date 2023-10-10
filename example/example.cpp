#include <chrono>
#include <iostream>
#include <thread>

#include "timer.h"

int main()
{

    std::cout << "timer\n";

    timer::set_timeout st{[]() { std::cout << "tack...\n"; },
                          std::chrono::milliseconds(300)};

    timer::interval    i{[]() { std::cout << "tick...\n"; },
                      std::chrono::milliseconds(100)};

    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    return 0;
}
