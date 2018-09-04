# Locate GTest
find_package(GTest REQUIRED) #ubuntu 14.04 package: libgtest-dev

# Link runTests with what we want to test and the GTest and pthread library
include_directories(
        ${PROJECT_SOURCE_DIR}
)

set(TEST_SOURCE_LIST
        tests/src/myfun_test.cpp)

add_executable(googletests tests/main.cpp ${SOURCE_LIST} ${TEST_SOURCE_LIST})

target_link_libraries(googletests ${GTEST_LIBRARIES} ${LIBS} pthread)

