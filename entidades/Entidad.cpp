//
// Created by User01 on 8/11/2026.
//

#include "Entidad.h"

Entidad::Entidad(std::string nombre, int vida, int ataque, int defensa) {
    this->nombre = nombre;
    this->vida = vida;
    this->ataque = ataque;
    this->defensa = defensa;
}

Entidad::~Entidad() {
}


std::string Entidad::get_nombre() const {
    return nombre;}
void Entidad::set_nombre(std::string nombre) {
    this->nombre = nombre;}

int Entidad::get_vida() const {
    return vida;}
void Entidad::set_vida(int vida) {
    this->vida = vida;}

int Entidad::get_ataque() const {
    return ataque;}
void Entidad::set_ataque(int ataque) {
    this->ataque = ataque;}

int Entidad::get_defensa() const {
    return defensa;}
void Entidad::set_defensa(int defensa) {
    this->defensa = defensa;}
