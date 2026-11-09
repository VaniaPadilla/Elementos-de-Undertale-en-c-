//
// Created by User01 on 8/11/2026.
//

#ifndef TAREATEO4_LOCATION_H
#define TAREATEO4_LOCATION_H
#include <vector>

#include "Tienda.h"
#include "entidades/Entidad.h"


class Location {
private:
    std::string nombre;

    int habitantesNum;
    std::vector<Entidad*> habitantes;
    std::vector<Tienda*> tiendas;

    std::string descripcion;
    std::string clima;

public:

    Location(std::string nombre, std::string descripcion, std::string clima);
    ~Location();


    void agregarHabitantes(Entidad* enti);

    void mostrarInfo() const;
    void mostrarHabitantes() const;

    void agregarTienda(Tienda* tienda);
    void mostrarTienda() const;


    std::string get_nombre() const;
    void set_nombre(std::string nombre);

    int get_habitantes_num() const;
    void set_habitantes_num(int habitantes_num);

    std::vector<Entidad*> get_habitantes() const;
    void set_habitantes(std::vector<Entidad*> habitantes);

    std::vector<Tienda*> get_tiendas() const;
    void set_tiendas(std::vector<Tienda*> tiendas);

    std::string get_descripcion() const;
    void set_descripcion(std::string descripcion);

    std::string get_clima() const;
    void set_clima(std::string clima);
};


#endif //TAREATEO4_LOCATION_H
