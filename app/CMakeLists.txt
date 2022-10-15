include_directories(include)

add_subdirectory(src)

target_include_directories(DemoApp PRIVATE ${CMAKE_SOURCE_DIR}/lib/include)
target_link_libraries(DemoApp PRIVATE DemoLib)
