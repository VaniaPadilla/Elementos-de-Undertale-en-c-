//
// Created by User01 on 8/11/2026.
//

#include "Tienda.h"

#include "entidades/Jugador.h"

Tienda::Tienda(std::string vendedor, std::string descripcion) {
    this->vendedor = vendedor;
    this->descripcion = descripcion;
}

Tienda::~Tienda() {

}

void Tienda::agregarItem(Item* item) {
    this->items.push_back(item);
}

void Tienda::mostrarOpciones(const Jugador& comprador) const {
    std::cout << "Tienda de " << vendedor << "\n";
    std::cout << descripcion;
    std::cout << " Buy \n Sell \n Talk \n Exit \n";
    std::cout << comprador.get_oro() << "G \n\n";
}

void Tienda::mostrarItems(const Jugador& comprador) const {
    std::cout << "Items: \n";
    for (int i=0; i<items.size(); i++) {
        std::cout << "(" << i << ") " << items[i]->get_costo_compra() << "G - " << items[i]->get_nombre() << "\n";
    }

    std::cout << comprador.get_oro() << "G \n";
    std::cout << "Exit\n\n";
}

void Tienda::comprar(Jugador &comprador, int indice) {
    if (items[indice]->get_costo_compra() <= comprador.get_oro()) {
        comprador.set_oro(comprador.get_oro()-items[indice]->get_costo_compra());
        std::cout << "Has comprado " << items[indice]->get_nombre() << "\n";
        comprador.agregarItem(items[indice]);
        std::cout << "\n";
    }
    else std::cout << "No alcanza el oro\n";
}

void Tienda::vender(Jugador& comprador, int indice) {
    std::cout << "No\n";
}

void Tienda::hablar() const {
    for (std::string linea : dialogo) {
        std::cout << linea << "\n";
    }
}


std::string Tienda::get_vendedor() const {
    return vendedor;}
void Tienda::set_vendedor(std::string vendedor) {
    this->vendedor = vendedor;}

std::string Tienda::get_descripcion() const {
    return descripcion;}
void Tienda::set_descripcion(std::string descripcion) {
    this->descripcion = descripcion;}

std::vector<Item*> Tienda::get_items() const {
    return items;}
void Tienda::set_items(std::vector<Item*> items) {
    this->items = items;}

std::vector<std::string> Tienda::get_dialogo() const {
    return dialogo;}
void Tienda::set_dialogo(std::vector<std::string> dialogo) {
    this->dialogo = dialogo;}
