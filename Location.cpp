//
// Created by User01 on 8/11/2026.
//

#include "Location.h"

Location::Location(std::string nombre, std::string descripcion, std::string clima) {
    this->nombre = nombre;
    this->habitantesNum = 0;
    this->descripcion = descripcion;
    this->clima = clima;

    std::cout << "Llegas a " << nombre << "\n\n";
}

Location::~Location() {
}

void Location::agregarHabitantes(Entidad* enti) {
    habitantes.push_back(enti);
    habitantesNum++;

    std::cout << enti->get_nombre() << " pasea por " << nombre << "\n";
}

void Location::mostrarInfo() const {
    std::cout << nombre << "\n";
    std::cout << "Numero de habitantes: " << habitantesNum << "\n";
    std::cout << "Descripcion: " << descripcion << "\n";
    std::cout << "Clima: " << clima << "\n\n";
}

void Location::mostrarHabitantes() const {
    std::cout << "Habitantes viviendo en " << nombre << ": \n";
    for (Entidad* enti : habitantes) {
        std::cout << enti->get_nombre() << ", ";

    }
    std::cout << "\n\n";
}

void Location::agregarTienda(Tienda *tienda) {
    tiendas.push_back(tienda);
}

void Location::mostrarTienda() const {
    std::cout << "Tiendas en " << this->get_nombre() << ": \n";
    for (Tienda* tienda : tiendas) {
        std::cout << "Tienda de " << tienda->get_vendedor() << "\n";
    }
}

std::string Location::get_nombre() const {
    return nombre;}
void Location::set_nombre(std::string nombre) {
    this->nombre = nombre;}

int Location::get_habitantes_num() const {
    return habitantesNum;}
void Location::set_habitantes_num(int habitantes_num) {
    habitantesNum = habitantes_num;}

std::vector<Entidad*> Location::get_habitantes() const {
    return habitantes;}
void Location::set_habitantes(std::vector<Entidad*> habitantes) {
    this->habitantes = habitantes;}

std::vector<Tienda*> Location::get_tiendas() const {
    return tiendas;}
void Location::set_tiendas(std::vector<Tienda*> tiendas) {
    this->tiendas = tiendas;}

std::string Location::get_descripcion() const {
    return descripcion;}
void Location::set_descripcion(std::string descripcion) {
    this->descripcion = descripcion;}

std::string Location::get_clima() const {
    return clima;}
void Location::set_clima(std::string clima) {
    this->clima = clima;}
