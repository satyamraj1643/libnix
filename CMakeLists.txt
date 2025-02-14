cmake_minimum_required(VERSION 3.10)

project(libservonix)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add source files
add_executable(libservonix
    main.cpp
    Networking/Server.cpp
    Networking/Handlers/HomeHandler.cpp
    Networking/Handlers/AboutHandler.cpp
)

# Include headers
target_include_directories(libservonix PRIVATE ${CMAKE_SOURCE_DIR} ${CMAKE_SOURCE_DIR}/Networking)