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
        src/ctp.cpp
        src/DispatchQueue.h
        src/DispatchQueue.cpp
        src/MdApi.h
        src/MdApi.cpp
)
target_link_libraries(ctp PRIVATE thostmduserapi_se thosttraderapi_se)


add_custom_target(copy_dlls
    COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/${CTP_LIBRARY_DIRECTORY}/thostmduserapi_se.dll ${PROJECT_SOURCE_DIR}/${CMAKE_PROJECT_NAME}
    COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/${CTP_LIBRARY_DIRECTORY}/thosttraderapi_se.dll ${PROJECT_SOURCE_DIR}/${CMAKE_PROJECT_NAME}

    # Output Message
    COMMENT "Copying dlls to ${PROJECT_SOURCE_DIR}/${CMAKE_PROJECT_NAME}" VERBATIM
)

add_dependencies(ctp copy_dlls)