//
// Created by User01 on 8/11/2026.
//

#ifndef TAREATEO4_TIENDA_H
#define TAREATEO4_TIENDA_H

#include "entidades/Monstruo.h"
#include "items/Item.h"
#include "entidades/Jugador.h"

#include <vector>

class Tienda {
private:
    std::string vendedor;
    std::string descripcion;

    std::vector<Item*> items;
    std::vector<std::string> dialogo;

public:
    Tienda(std::string vendedor, std::string descripcion);
    ~Tienda();


    void agregarItem(Item* item);

    void mostrarOpciones(const Jugador& comprador) const;
    void mostrarItems(const Jugador& comprador) const;

    void comprar(Jugador& comprador, int indice);
    void vender(Jugador& comprador, int indice);

    void hablar() const;


    std::string get_vendedor() const;
    void set_vendedor(std::string vendedor);

    std::string get_descripcion() const;
    void set_descripcion(std::string descripcion);

    std::vector<Item*> get_items() const;
    void set_items(std::vector<Item*> items);

    std::vector<std::string> get_dialogo() const;
    void set_dialogo(std::vector<std::string> dialogo);
};


#endif //TAREATEO4_TIENDA_H
