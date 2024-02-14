project(css_dlc)

add_library(css_dlc SHARED)

set(CMAKE_CXX_STANDARD 20)

target_include_directories(css_dlc PRIVATE "${CMAKE_SOURCE_DIR}/include")
target_sources(css_dlc PRIVATE
        src/main.cpp
        src/platform/platform.cpp
)

install(TARGETS css_dlc
        DESTINATION ${CMAKE_SOURCE_DIR}/bin
)