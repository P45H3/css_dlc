//
// Created by p45h3 on 2/14/24.
//

#include <stdio.h>
#include <chrono>
#include <thread>

int main () {
    printf("test binary\n");

    while (1){
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}