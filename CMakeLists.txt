cmake_minimum_required(VERSION 3.8)

project (onlyoffice-documentbuilder-cxx-api-demo CXX)
#
# global options
#
set(CMAKE_CXX_STANDARD 17)
#
# onlyoffice document builder
#
add_library(documentbuilder SHARED IMPORTED)
set_property(TARGET documentbuilder PROPERTY
             IMPORTED_LOCATION /opt/onlyoffice/documentbuilder/libdoctrenderer.so
)
set_property(TARGET documentbuilder PROPERTY
             INTERFACE_INCLUDE_DIRECTORIES /opt/onlyoffice/documentbuilder/include
)
#
# target
#
add_executable(onlyoffice-documentbuilder-cxx-api-demo main.cpp)
target_link_libraries(onlyoffice-documentbuilder-cxx-api-demo PRIVATE documentbuilder)


