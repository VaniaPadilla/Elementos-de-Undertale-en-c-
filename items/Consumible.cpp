//
// Created by User01 on 8/11/2026.
//

#include "Consumible.h"
#include "../entidades/Jugador.h"

Consumible::Consumible(std::string nombre, std::string descripcion, int costoCompra, int costoVenta, int curacion) : Item(nombre, descripcion, costoCompra, costoVenta) {
    this->curacion = curacion;
}

Consumible::~Consumible() {
}


void Consumible::mostrarInformacion() {
    std::cout << "* \"" << this->get_nombre() << "\" - Cura " << this->curacion << " HP\n";
    std::cout << "* " << this->get_descripcion() << "\n";
}

int Consumible::get_curacion() const {
    return curacion; }

void Consumible::set_curacion(int curacion) {
    this->curacion = curacion; }