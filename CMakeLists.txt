cmake_minimum_required(VERSION 3.10)


project(    
        Demo_Anwendung
        LANGUAGES CXX
        DESCRIPTION "Objektorientierte Programmierung in C++"
        HOMEPAGE_URL "https://vorlesung.nabla_b.engineering"

)

find_package(cli11 QUIET)
if(NOT cli11_FOUND)
        include(FetchContent)
        FetchContent_Declare(
                cli11
                GIT_REPOSITORY https://github.com/CLIUtils/cli11
                GIT_TAG main
        )
        FetchContent_MakeAvailable(cli11)
endif()


add_executable( ${PROJECT_NAME} "${CMAKE_CURRENT_SOURCE_DIR}/src/main.cc")
target_link_libraries( ${PROJECT_NAME} CLI11::CLI11)