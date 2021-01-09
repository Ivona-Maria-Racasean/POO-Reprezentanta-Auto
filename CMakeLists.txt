cmake_minimum_required(VERSION 3.17)
project(reprezentanta_auto)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -pedantic -Weffc++")
add_executable(reprezentanta_auto main.cpp rep_auto.h rep_auto.cpp revizie.h revizie.cpp masina.h masina.cpp reparatie.h reparatie.cpp tip_revizie.cpp tip_revizie.h)