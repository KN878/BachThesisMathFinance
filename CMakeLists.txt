cmake_minimum_required(VERSION 3.15)
project(ipopt_mle)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_COLOR_MAKEFILE ON)
set(CMAKE_SKIP_ASSEMBLY_SOURCE_RULES ON)
set(CMAKE_SKIP_PREPROCESSED_SOURCE_RULES ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_INCLUDE_DIRECTORIES_PROJECT_BEFORE ON)
set_property(GLOBAL PROPERTY USE_FOLDERS 1)

#Include Ipopt
set(IPOPT_LIBRARY_DIRS /usr/local/lib)
set(IPOPT_INCLUDE_DIRS /usr/local/include/coin-or)

message("ipopt binary path is: " ${IPOPT_LIBRARY_DIRS})
message("ipopt include path is: " ${IPOPT_INCLUDE_DIRS})

include_directories(${IPOPT_INCLUDE_DIRS} ${CMAKE_SOURCE_DIR}/include)
link_directories(${IPOPT_LIBRARY_DIRS})

#Include Wolfram Mathematica
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/CMake/Mathematica" ${CMAKE_MODULE_PATH})
find_package(Mathematica)

include_directories(${Mathematica_INCLUDE_DIRS})
#include_directories(${CMAKE_CURRENT_BINARY_DIR})

#Setting executables
#set(OU_MODEL modified_ou/matrices/grad.c modified_ou/matrices/grad.h modified_ou/matrices/hess.c modified_ou/matrices/hess.h modified_ou/problem/model.c modified_ou/problem/model.h modified_ou/problem/ipopt_interface.cpp modified_ou/problem/ipopt_interface.h)
#set(CIR_MODEL cir/heat_kernels/matrices/grad.c cir/heat_kernels/matrices/grad.h cir/heat_kernels/matrices/hess.c cir/heat_kernels/matrices/hess.h cir/heat_kernels/problem/model.c cir/heat_kernels/problem/model.h cir/heat_kernels/problem/ipopt_interface.cpp cir/heat_kernels/problem/ipopt_interface.h)
set(CIR_MODEL cir/three_variate/matrices/grad.c cir/three_variate/matrices/grad.h cir/three_variate/matrices/hess.c cir/three_variate/matrices/hess.h cir/three_variate/problem/model.c cir/three_variate/problem/model.h cir/three_variate/problem/ipopt_interface.cpp cir/three_variate/problem/ipopt_interface.h)
set(SRC_INPUT main.cpp)
set(SRC_INPUT ${SRC_INPUT} ${CIR_MODEL} "file reader/CSVReader.cpp" "file reader/CSVReader.h")
add_executable(${PROJECT_NAME} ${SRC_INPUT})

#Linking IPOpt
target_link_libraries(${PROJECT_NAME} ipopt)

#Linking Mathematica
message(${Mathematica_RUNTIME_LIBRARY_DIRS})
message(${Mathematica_WolframLibrary_LIBRARIES})
target_link_libraries(${PROJECT_NAME} ${Mathematica_WolframLibrary_LIBRARIES})
target_link_libraries(${PROJECT_NAME} "/usr/local/lib/libhsl.so")
target_link_libraries(${PROJECT_NAME} stdc++fs)
set_target_properties(${PROJECT_NAME} PROPERTIES INSTALL_RPATH "${Mathematica_RUNTIME_LIBRARY_DIRS}" BUILD_WITH_INSTALL_RPATH ON)
