//
// Created by User01 on 8/11/2026.
//

#ifndef TAREATEO4_ARMA_H
#define TAREATEO4_ARMA_H
#include <string>

#include "Item.h"

class Jugador;

class Arma : public Item {
private:
    int ataque;

public:
    Arma(std::string nombre, std::string descripcion, int costoCompra, int costoVenta, int ataque);

    ~Arma();

    void mostrarInformacion() override;

    int get_ataque() const;
    void set_ataque(int ataque);
};

#endif //TAREATEO4_ARMA_H
