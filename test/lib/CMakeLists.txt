add_executable(DemoLibTest util_test.cpp)
target_include_directories(DemoLibTest PRIVATE ${CMAKE_SOURCE_DIR}/lib/include)
target_link_libraries(DemoLibTest PRIVATE DemoLib GTest::gtest_main)

gtest_discover_tests(DemoLibTest)
