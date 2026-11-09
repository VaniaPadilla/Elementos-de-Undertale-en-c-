//
// Created by User01 on 8/11/2026.
//

#include "Monstruo.h"


Monstruo::Monstruo(std::string nombre, int vida, int ataque, int defensa, std::string descripcion, std::string tipografia)
: Entidad(nombre, vida, ataque, defensa) {
    this->descripcion = descripcion;
    this->tipografia = tipografia;
}

Monstruo::Monstruo(std::string nombre, int vida, int ataque, int defensa, std::string descripcion)
: Entidad(nombre, vida, ataque, defensa) {
    this->descripcion = descripcion;
    this->tipografia = "Pixel Operator";
}

Monstruo::~Monstruo() {
}


void Monstruo::mostrarInfo() {
    std::cout << "* " << this->get_nombre() << " - ATK " << this->get_ataque() << " DEF " <<
        this->get_defensa() << "\n";
    std::cout << "* " << this->descripcion << "\n\n";
}


std::string Monstruo::get_descripcion() const {
    return descripcion; }
void Monstruo::set_descripcion(std::string descripcion) {
    this->descripcion = descripcion; }

std::string Monstruo::get_tipografia() const {
    return tipografia; }
void Monstruo::set_tipografia(std::string tipografia) {
    this->tipografia = tipografia; }
