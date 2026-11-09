//
// Created by User01 on 8/11/2026.
//

#include "Inventario.h"

#include <algorithm>

Inventario::Inventario() {
}
Inventario::~Inventario() {
}

void Inventario::agregarItem(Item* item) {
    inventario.push_back(item);
}

void Inventario::dropItem(Item* item) {
    auto it = std::find(inventario.begin(), inventario.end(), item);
    if (it != inventario.end()) {
        inventario.erase(it);
    }
}


void Inventario::mostrarInventario() const {
    if (inventario.empty()) {
        std::cout << " \n";
    }
    for (int i = 0; i < inventario.size(); i++) {
        std::cout << "(" << i << ") " << inventario[i]->get_nombre() << "\n";
    }
}


std::vector<Item *> Inventario::get_inventario() const {
    return inventario;
}

void Inventario::set_inventario(std::vector<Item*> inventario) {
    this->inventario = inventario;
}