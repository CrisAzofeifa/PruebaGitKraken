cmake_minimum_required(VERSION 3.9)
project(TrabajoExtraclaseDatos2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp ListaSimple.cpp ListaSimple.h ListaDoble.cpp ListaDoble.h VentanaPrincipal.cpp VentanaPrincipal.h LstaCircular.cpp LstaCircular.h)
add_executable(TrabajoExtraclaseDatos2 ${SOURCE_FILES})

INCLUDE_DIRECTORIES( allegro/5.0.11/include )

LINK_DIRECTORIES( allegro/5.0.11/lib )

TARGET_LINK_LIBRARIES(TrabajoExtraclaseDatos2  allegro_acodec
        allegro_audio
        allegro_color
        allegro_dialog
        allegro_image
        allegro_main
        allegro_memfile
        allegro_physfs
        allegro_primitives
        allegro_ttf
        allegro_font
        allegro)