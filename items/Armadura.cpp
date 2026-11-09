//
// Created by User01 on 8/11/2026.
//

#include "Armadura.h"

Armadura::Armadura(std::string nombre, std::string descripcion, int costoCompra, int costoVenta, int defensa)
: Item(nombre, descripcion, costoCompra, costoVenta) {
    this->defensa = defensa;
}

Armadura::~Armadura() {
}

void Armadura::mostrarInformacion() {
    std::cout << "* \"" << this->get_nombre() << "\" - Armadura DF " << this->defensa << "\n";
    std::cout << "* " << this->get_descripcion() << "\n";
}


int Armadura::get_defensa() const {
    return defensa;}
void Armadura::set_defensa(int defensa) {
    this->defensa = defensa;}
