cmake_minimum_required(VERSION 3.22)

set (MY_DIRECTORY ${CMAKE_SOURCE_DIR}/include)

set(SOURCE
        main.cpp

        )
set(INCLUDE
        ${MY_DIRECTORY}/Circle.h
        ${MY_DIRECTORY}/Rectangle.h
        ${MY_DIRECTORY}/Shape.h
        ${MY_DIRECTORY}/Triangle.h
        )


add_executable(Shape_Interface ${SOURCE} ${INCLUDE})
target_include_directories (Shape_Interface PUBLIC ${MY_DIRECTORY})
