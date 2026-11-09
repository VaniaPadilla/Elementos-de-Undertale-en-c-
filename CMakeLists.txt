cmake_minimum_required(VERSION 4.3)
project(tareaTeo4)

set(CMAKE_CXX_STANDARD 20)

add_executable(que main.cpp
        items/Item.cpp
        items/Item.h
        items/Arma.cpp
        items/Arma.h
        items/Consumible.cpp
        items/Consumible.h
        items/Armadura.cpp
        items/Armadura.h
        entidades/Entidad.cpp
        entidades/Entidad.h
        entidades/Jugador.cpp
        entidades/Jugador.h
        entidades/Monstruo.cpp
        entidades/Monstruo.h
        Location.cpp
        Location.h
        Tienda.cpp
        Tienda.h
        Inventario.cpp
        Inventario.h)
