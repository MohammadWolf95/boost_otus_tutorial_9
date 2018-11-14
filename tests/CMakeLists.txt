project(tests)

find_package (Boost COMPONENTS unit_test_framework REQUIRED)

set(test1_source test1.cpp) 
set(test2_source test2.cpp) 
add_executable(test1 ${test1_source})
add_executable(test2 ${test2_source})
target_link_libraries(test1 ${Boost_LIBRARIES})
target_link_libraries(test2 ${Boost_LIBRARIES})
add_test(NAME Test1 COMMAND test1)
add_test(NAME Test2 COMMAND test2)
