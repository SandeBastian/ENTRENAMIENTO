cmake_minimum_required(VERSION 3.29)
project(Mode7)

set(CMAKE_CXX_STANDARD 14)

add_executable(slot1_0 ArchivosBase/slot1_0.cpp)
add_executable(slot1_1 ArchivosBase/slot1_1.cpp)
add_executable(slot1_2 ArchivosBase/slot1_2.cpp)
add_executable(slot2_0 ArchivosBase/slot2_0.cpp)
add_executable(slot2_1 ArchivosBase/slot2_1.cpp)

add_executable(slot3_0 BinarioBase/slot3_0.cpp)
add_executable(slot4_0 BinarioBase/slot4_0.cpp)
add_executable(slot4_1 BinarioBase/slot4_1.cpp)
add_executable(slot4_1_0 BinarioBase/slot4_1_0.cpp)
add_executable(slot4_1_1 BinarioBase/slot4_1_1.cpp)
add_executable(slot4_1_2 BinarioBase/slot4_1_2.cpp)

add_executable(ejercicioA1_0 EjerciciosAudanteA/ejercicioA1_0.cpp)
add_executable(ejercicioA2_0 EjerciciosAudanteA/ejercicioA2_0.cpp)