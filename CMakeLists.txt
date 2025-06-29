cmake_minimum_required(VERSION 3.10)
project(Lab4)

set(CMAKE_CXX_STANDARD 20)

# Incluye carpetas con headers
include_directories(
        Logica/controlador
        Logica/dominio
        Logica/interfaceSistema
        presentacion
        menu
        ICollection
        ICollection/interfaces
        ICollection/collections
)

# Buscar todos los .cpp automáticamente
file(GLOB_RECURSE SOURCE_FILES
        src/*.cpp
        Logica/**/*.cpp
        presentacion/*.cpp
        menu/*.cpp
        ICollection/*.cpp
        ICollection/interfaces/*.cpp
        ICollection/collections/*.cpp
)

# Crear el ejecutable
add_executable(Lab4 ${SOURCE_FILES}
        Logica/dominio/Producto.cpp
        Logica/dominio/Producto.h
        Logica/dominio/DTCategoria.cpp
        Logica/dominio/DTCategoria.h
        presentacion/PUsuario.cpp
        presentacion/PUsuario.h
        presentacion/PProducto.cpp
        presentacion/PProducto.h
        Logica/dominio/DTProducto.cpp
        Logica/dominio/DTProducto.h
        presentacion/PPromocion.cpp
        presentacion/PPromocion.h
        Logica/dominio/Promocion.cpp
        Logica/dominio/Promocion.h
        Logica/dominio/DTPromocion.cpp
        Logica/dominio/DTPromocion.h
        Logica/dominio/Requiere.cpp
        Logica/dominio/Requiere.h

)

# Especificar la ruta completa a String.cpp en caso de que no se esté incluyendo correctamente
# (opcional, solo si sigue fallando con el GLOB)
# target_sources(Lab4 PRIVATE ICollection/String.cpp)
