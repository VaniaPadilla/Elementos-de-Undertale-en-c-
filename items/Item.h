//
// Created by User01 on 8/11/2026.
//

#ifndef TAREATEO4_ITEM_H
#define TAREATEO4_ITEM_H

#include <iostream>
#include <string>

class Jugador;

class Item {
private:
    std::string nombre;
    std::string descripcion;
    int costoCompra;
    int costoVenta;

public:
    Item(std::string nombre, std::string descripcion, int costo, int costoVenta);
    Item(std::string nombre, std::string descripcion, int costoVenta);

    virtual ~Item();

    virtual void mostrarInformacion() = 0;

    std::string get_nombre() const;
    void set_nombre(std::string nombre);

    std::string get_descripcion() const;
    void set_descripcion(std::string descripcion);

    int get_costo_compra() const;
    void set_costo_compra(int costo_compra);

    int get_costo_venta() const;
    void set_costo_venta(int costo_venta);
};


#endif //TAREATEO4_ITEM_H
