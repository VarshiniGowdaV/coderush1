cmake_minimum_required(VERSION 3.16)

project(coderush1 LANGUAGES C)

add_executable(coderush1 main.c
    Datatype.md
    Datatype.c
)

include(GNUInstallDirs)
install(TARGETS coderush1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
