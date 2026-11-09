//
// Created by User01 on 8/11/2026.
//

#ifndef TAREATEO4_INVENTARIO_H
#define TAREATEO4_INVENTARIO_H

#include "items/Item.h"

#include <vector>

class Inventario {
private:
    std::vector<Item*> inventario;

public:
    Inventario();
    ~Inventario();

    void agregarItem(Item* item);
    void dropItem(Item* item);

    void mostrarInventario() const;

    std::vector<Item *> get_inventario() const;
    void set_inventario(std::vector<Item*> inventario);
};


#endif //TAREATEO4_INVENTARIO_H
