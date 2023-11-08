project(${CMAKE_PROJECT_NAME})
include(catchTest.cmake)
enable_testing()

set(TEST_FILES Testing.cpp)
include_directories(${CMAKE_SOURCE_DIR}/Headers)
add_executable(Tst ${TEST_FILES})

target_link_libraries(Tst PRIVATE Catch2::Catch2WithMain lib)

