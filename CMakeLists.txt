cmake_minimum_required(VERSION 3.10)
project(Lab4)

set(CMAKE_CXX_STANDARD 20)

# Indicamos las carpetas donde están los .h
include_directories(
        Logica/controlador
        Logica/dominio
        Logica/interfaceSistema
        presentacion
)

# Buscar todos los .cpp automáticamente (recomendado para trabajo en equipo)
file(GLOB_RECURSE SOURCE_FILES
        src/*.cpp
        Logica/**/*.cpp
        presentacion/*.cpp
)

add_executable(Lab4 ${SOURCE_FILES}
        menu/menu.h
        menu/menu.cpp
        Logica/dominio/DTFecha.h
        Logica/dominio/Cliente.h
        Logica/dominio/DTDomicilio.h
        Logica/dominio/DTFecha.cpp
        Logica/dominio/Cliente.cpp
        Logica/dominio/DTDomicilio.cpp
        Logica/dominio/Vendedor.h
        Logica/dominio/Vendedor.cpp
        Logica/dominio/Producto.h)
