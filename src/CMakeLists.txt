project(SrcTest)
 
#set( main_source main.cpp )

add_executable(main_source main.cpp)

install(TARGETS SrcTest RUNTIME DESTINATION bin)