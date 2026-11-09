//
// Created by User01 on 8/11/2026.
//

#ifndef TAREATEO4_HUMANO_H
#define TAREATEO4_HUMANO_H

#include <vector>

#include "Entidad.h"
#include "../Inventario.h"
#include "../items/Item.h"
#include "../items/Arma.h"
#include "../items/Armadura.h"

class Jugador : public Entidad {

private:
    int lv;
    int hpActual;
    int exp;

    Arma* armaEquip;
    Armadura* armaduraEquip;

    int oro;
    int kills;

    Inventario inventario;

public:
    // Constructor & Destructor
    Jugador(std::string nombre);
    ~Jugador();


    // Metodos propios
    void abrirInventario();
    void mostrarInfo() override;

    void mostrarItems() const;
    void mostrarStats() const;

    void agregarItem(Item* item);
    void dropItem(Item* item);

    void recibirDanio(int ouch);


    // Getters & Setters

    int get_lv() const;
    void set_lv(int lv);

    int get_hp_actual() const;
    void set_hp_actual(int hp_actual);

    int get_exp() const;
    void set_exp(int exp);

    Arma* get_arma_equip() const;
    void set_arma_equip(Arma* arma_equip);

    Armadura* get_armadura_equip() const;
    void set_armadura_equip(Armadura* armadura_equip);

    int get_kills() const;
    void set_kills(int kills);

    int get_oro() const;
    void set_oro(int oro);

    Inventario get_inventario() const;
    void set_inventario(Inventario inventario);
};


#endif //TAREATEO4_HUMANO_H
