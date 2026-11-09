//
// Created by User01 on 8/11/2026.
//

#include "Item.h"

Item::Item(std::string nombre, std::string descripcion, int costoCompra, int costoVenta) {
    this->nombre = nombre;
    this->descripcion = descripcion;
    this->costoCompra = costoCompra;
    this->costoVenta = costoVenta;
}
Item::Item(std::string nombre, std::string descripcion, int costoVenta) {
    this->nombre = nombre;
    this->descripcion = descripcion;
    this->costoVenta = costoVenta;
    this->costoCompra = -1;
}


Item::~Item() {
}


std::string Item::get_nombre() const {
    return nombre; }
void Item::set_nombre(std::string nombre) {
    this->nombre = nombre; }

std::string Item::get_descripcion() const {
    return descripcion; }
void Item::set_descripcion(std::string descripcion) {
    this->descripcion = descripcion; }

int Item::get_costo_compra() const {
    return costoCompra; }
void Item::set_costo_compra(int costo_compra) {
    costoCompra = costo_compra; }

int Item::get_costo_venta() const {
    return costoVenta; }
void Item::set_costo_venta(int costo_venta) {
    costoVenta = costo_venta; }
