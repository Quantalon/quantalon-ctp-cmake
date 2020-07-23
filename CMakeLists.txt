cmake_minimum_required(VERSION 3.16)
project(quantalon_ctp)

set(CMAKE_CXX_STANDARD 17)

set(CTP_LIBRARY_DIRECTORY libs/ctp-v6.3.15)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/${CMAKE_PROJECT_NAME})

add_subdirectory(libs/pybind11-2.5.0)
include_directories(${CTP_LIBRARY_DIRECTORY})
link_directories(${CTP_LIBRARY_DIRECTORY})

pybind11_add_module(
        ctp
        src/dispatch_queue.h
        src/dispatch_queue.cpp
        src/bind_constants.h
        src/bind_constants.cpp
        src/bind_structs.h
        src/bind_structs.cpp
        src/bind_md_api.h
        src/bind_md_api.cpp
        src/bind_td_api.h
        src/bind_td_api.cpp
        src/md_api.h
        src/md_api.cpp
        src/td_api.h
        src/td_api.cpp
        src/ctp.cpp
)
target_link_libraries(ctp PRIVATE thostmduserapi_se thosttraderapi_se)

if(WIN32)
add_custom_target(copy_dlls
    COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/${CTP_LIBRARY_DIRECTORY}/thostmduserapi_se.dll ${PROJECT_SOURCE_DIR}/${CMAKE_PROJECT_NAME}
    COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/${CTP_LIBRARY_DIRECTORY}/thosttraderapi_se.dll ${PROJECT_SOURCE_DIR}/${CMAKE_PROJECT_NAME}

    # Output Message
    COMMENT "Copying dlls to ${PROJECT_SOURCE_DIR}/${CMAKE_PROJECT_NAME}" VERBATIM
)
add_dependencies(ctp copy_dlls)
elseif(UNIX)
    # @todo:
else()
    error("NotImplemented")
endif()
