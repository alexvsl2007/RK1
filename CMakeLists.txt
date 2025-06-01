cmake_minimum_required(VERSION 3.10)
project(pizza_store)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)


add_executable(pizza_store_crtp src/main_crtp.cpp src/pizza_store_crtp.cpp)
add_executable(pizza_store_nvi src/main_nvi.cpp src/pizza_store_nvi.cpp)

option(BUILD_TESTS "Build tests" ON)

if(BUILD_TESTS)
    include(FetchContent)
    FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.12.1
    )
    FetchContent_MakeAvailable(googletest)

    enable_testing()

    add_executable(pizza_store_crtp_test tests/pizza_store_crtp_test.cpp src/pizza_store_crtp.cpp)
    target_link_libraries(pizza_store_crtp_test GTest::gtest_main)
    add_test(NAME pizza_store_crtp_test COMMAND pizza_store_crtp_test)

    add_executable(pizza_store_nvi_test tests/pizza_store_nvi_test.cpp src/pizza_store_nvi.cpp)
    target_link_libraries(pizza_store_nvi_test GTest::gtest_main)
    add_test(NAME pizza_store_nvi_test COMMAND pizza_store_nvi_test)
endif()

set(CPACK_GENERATOR "DEB")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "alexvsl2007")
set(CPACK_PACKAGE_VERSION "1.0.0")
include(CPack)
