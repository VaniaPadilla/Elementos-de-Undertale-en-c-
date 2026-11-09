//
// Created by User01 on 8/11/2026.
//

#ifndef TAREATEO4_ENTIDAD_H
#define TAREATEO4_ENTIDAD_H

#include <iostream>
#include <string>

class Entidad {
private:
    std::string nombre;

    int vida;
    int ataque;
    int defensa;

public:
    Entidad(std::string nombre, int vida, int ataque, int defensa);
    virtual ~Entidad();

    virtual void mostrarInfo() = 0;


    std::string get_nombre() const;
    void set_nombre(std::string nombre);

    int get_vida() const;
    void set_vida(int vida);

    int get_ataque() const;
    void set_ataque(int ataque);

    int get_defensa() const;
    void set_defensa(int defensa);
};


#endif //TAREATEO4_ENTIDAD_H
