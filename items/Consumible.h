//
// Created by User01 on 8/11/2026.
//

#ifndef TAREATEO4_CONSUMIBLE_H
#define TAREATEO4_CONSUMIBLE_H

#include "Item.h"

class Jugador;

class Consumible : public Item {

private:
    int curacion;

public:
    Consumible(std::string nombre, std::string descripcion, int costoCompra, int costoVenta, int curacion);

    ~Consumible();

    void mostrarInformacion() override;

    int get_curacion() const;
    void set_curacion(int curacion);
};



#endif //TAREATEO4_CONSUMIBLE_H
