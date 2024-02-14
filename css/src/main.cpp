//
// Created by p45h3 on 2/14/24.
//

#include <thread>
#include "../include/platform/platform.hpp"

void startup() {
#ifdef __linux__
    c_platform platform(e_platforms::linux_);
#elif _WIN32
    c_platform platform(e_platforms::windows_);
#endif
}

void __attribute__((constructor)) dll_entry_point()
{
    std::thread t1 (startup);
    t1.detach();
}