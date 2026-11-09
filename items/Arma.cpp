//
// Created by User01 on 8/11/2026.
//

#include "Arma.h"
#include "../entidades/Jugador.h"

Arma::Arma(std::string nombre, std::string descripcion, int costoCompra, int costoVenta, int ataque) : Item(nombre, descripcion, costoCompra, costoVenta) {
    this->ataque = ataque;
}

Arma::~Arma() {
}


void Arma::mostrarInformacion() {
    std::cout << "* \"" << this->get_nombre() << "\" - Arma AT " << this->ataque << "\n";
    std::cout << "* " << this->get_descripcion() << "\n";
}

int Arma::get_ataque() const {
    return ataque; }

void Arma::set_ataque(int ataque) {
    this->ataque = ataque; }