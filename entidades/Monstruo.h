//
// Created by User01 on 8/11/2026.
//

#ifndef TAREATEO4_MONSTRUO_H
#define TAREATEO4_MONSTRUO_H

#include "Entidad.h"

class Monstruo : public Entidad {
private:
    std::string descripcion;
    std::string tipografia;

public:
    Monstruo(std::string nombre, int vida, int ataque, int defensa, std::string descripcion, std::string tipografia);
    Monstruo(std::string nombre, int vida, int ataque, int defensa, std::string descripcion);
    ~Monstruo();

    void mostrarInfo() override;

    std::string get_descripcion() const;
    void set_descripcion(std::string descripcion);

    std::string get_tipografia() const;
    void set_tipografia(std::string tipografia);
};


#endif //TAREATEO4_MONSTRUO_H
