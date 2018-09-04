cmake_minimum_required(VERSION 3.12)
project(gtest_minimal)

set(CMAKE_CXX_STANDARD 11)

#build tests?
set(BUILD_TESTS ON)

set(SOURCE_LIST
        src/myfun.cpp)

set(LIBS
        #mylibs
        #eg. eigen
        )

add_executable(gtest_minimal main.cpp ${SOURCE_LIST} ${LIBS})

if(BUILD_TESTS)
    #add_subdirectory(tests)
    include(tests/CMakeLists.txt)
endif()
