cmake_minimum_required(VERSION 3.10)


project(    
        Demo_Anwendung
        LANGUAGES CXX
        DESCRIPTION "Objektorientierte Programmierung in C++"
        HOMEPAGE_URL "https://vorlesung.nabla_b.engineering"

)

add_executable( ${PROJECT_NAME} "${CMAKE_CURRENT_SOURCE_DIR}/src/main.cc")