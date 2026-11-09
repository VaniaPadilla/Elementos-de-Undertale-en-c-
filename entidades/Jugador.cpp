//
// Created by User01 on 8/11/2026.
//

#include "Jugador.h"

#include "Entidad.h"


// Constructor & Destructor
Jugador::Jugador(std::string nombre)
: Entidad(nombre, 20, 0, 0) {
    this->lv = 1;
    this->hpActual = 20;
    this->exp = 0;
    this->oro = 0;
    this->kills = 0;

    this->armaEquip = nullptr;
    this->armaduraEquip = nullptr;

    std::cout << nombre << " cayo al subsuelo\n\n";
}

Jugador::~Jugador() {
}

// Metodos propios
void Jugador::abrirInventario() {
    std::cout << "\nInventario:\n";
    std::cout << "|> Item\n";
    std::cout << "|> Stat\n";
    std::cout << "|> Telefono\n";

    std::cout << "Datos:\n";
    mostrarInfo();
}

void Jugador::mostrarInfo() {
    std::cout << this->get_nombre() << "\n";
    std::cout << "LV " << this->lv << "\n";
    std::cout << "G " << this->oro << "\n\n";
}

void Jugador::mostrarItems() const {
    std::cout << "\nItems: \n";
    inventario.mostrarInventario();
    std::cout << "\n";
}

void Jugador::mostrarStats() const {
    std::cout << "Stats:\n";
    std::cout << "\n\"" << this->get_nombre() << "\" \n\n";
    std::cout << "LV " << this->lv << "\n";
    std::cout << "HP " << this->hpActual << "/" << this->get_vida() << "\n\n";
    std::cout << "AT " << this->get_ataque() << "\t\t\t EXP: " << this->exp << "\n";
    std::cout << "DF " << this->get_defensa() << "\t\t\t NEXT: 10 \n\n";

    std::cout << "Arma: ";
    if (armaEquip != nullptr) std::cout << armaEquip->get_nombre();
    std::cout << "\nArmadura: ";
    if (armaduraEquip != nullptr) std::cout << armaduraEquip->get_nombre();
    std::cout << "\n\n";
    
    std::cout << "Oro: " << this->oro << "\t\t\t KILLS: " << this->kills << "\n\n";
}

void Jugador::agregarItem(Item* item) {
    inventario.agregarItem(item);

    std::cout << "Has agregado " << item->get_nombre() << " a tu inventario \n";
}

void Jugador::dropItem(Item *item) {
    inventario.dropItem(item);
}


// Getters & Setters

int Jugador::get_lv() const {
    return lv;}
void Jugador::set_lv(int lv) {
    this->lv = lv;}

int Jugador::get_hp_actual() const {
    return hpActual;}
void Jugador::set_hp_actual(int hp_actual) {
    hpActual = hp_actual;}

int Jugador::get_exp() const {
    return exp;}
void Jugador::set_exp(int exp) {
    this->exp = exp;}

Arma *Jugador::get_arma_equip() const {
    return armaEquip;}
void Jugador::set_arma_equip(Arma* arma_equip) {
    armaEquip = arma_equip;
    std::cout << "Se equipo: " << arma_equip->get_nombre() << " \n\n";}

Armadura *Jugador::get_armadura_equip() const {
    return armaduraEquip;}
void Jugador::set_armadura_equip(Armadura* armadura_equip) {
    armaduraEquip = armadura_equip;
    std::cout << "Se equipo: " << armadura_equip->get_nombre() << " \n\n";}

int Jugador::get_kills() const {
    return kills;}
void Jugador::set_kills(int kills) {
    this->kills = kills;}

int Jugador::get_oro() const {
    return oro;}
void Jugador::set_oro(int oro) {
    this->oro = oro;}

Inventario Jugador::get_inventario() const {
    return inventario;}
void Jugador::set_inventario(Inventario inventario) {
    this->inventario = inventario;}
