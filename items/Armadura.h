//
// Created by User01 on 8/11/2026.
//

#ifndef TAREATEO4_ARMADURA_H
#define TAREATEO4_ARMADURA_H
#include <string>

#include "Item.h"


class Armadura : public Item {
private:
    int defensa;

public:
    Armadura(std::string nombre, std::string descripcion, int costoCompra, int costoVenta, int defensa);

    ~Armadura();

    void mostrarInformacion() override;

    int get_defensa() const;
    void set_defensa(int defensa);
};


#endif //TAREATEO4_ARMADURA_H
