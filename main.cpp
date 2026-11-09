#include <iostream>

#include "entidades/Jugador.h"
#include "entidades/Monstruo.h"
#include "items/Arma.h"
#include "items/Armadura.h"
#include "items/Consumible.h"
#include "Location.h"
#include "Tienda.h"

int main() {

    //---------------------------------------------

    // Jugador
    Jugador jugador("Frisk");


    // Locations
    std::string snowdinDesc = "Region densamente boscosa, cubierta perpetuamente por nieve y hielo. "
    "Gran parte de Snowdin se asienta sobre un acantilado elevado, desde el cual se puede divisar una extensa masa arborea en la parte inferior.";

    Location snowdin("Snowdin", snowdinDesc, "Nevado");


    // Monstruos

    Monstruo greaterDog("Greater Dog", 105, 15, 8,
        "Esta tan emocionado que piensa que jugar es solo jugar");

    Monstruo lesserDog("Lesser Dog", 60, 12, 2,
        "Empuña un puñal de piedra hecho de guaunito");

    Monstruo sans("Sans", 1, 1, 1,
        "El enemigo mas facil. Solo puede lidiar 1 danio", "Comic Sans");

    Monstruo papyrus("Papyrus", 680, 20, 20,
        "Le gusta decir: \"Nyeh heh heh!\" ", "Papyrus");


    Monstruo gab("Gabriel Salazar", 9999999, 999999, 999999,
        "Mi Pookie <3", "My Heart");

    Monstruo annoyingDog("Annoying Dog", 9999999, 999999, 999999, "", "");

    snowdin.agregarHabitantes(&greaterDog);
    snowdin.agregarHabitantes(&lesserDog);
    snowdin.agregarHabitantes(&sans);
    snowdin.agregarHabitantes(&papyrus);
    snowdin.agregarHabitantes(&gab);
    snowdin.agregarHabitantes(&annoyingDog);

    std::cout << "\n";

    // Items
    Consumible dulceMonstruo("Dulce Monstruo", "Tiene un distinguido, no-regaliz sabor.", -1, 25, 10);
    Consumible donaArania("Dona Arania", "Una dona hecha con Cidra Arania en la masa.", 7, 30, 12);
    Consumible heladoNice("Nice Cream", "En lugar de una broma, el envoltorio dice algo bonito.", 15, 2, 15);

    Arma palo("Palo", "Es mas ruido que las nueces", -1, 150, 0);
    Arma toyKnife("Cuchillo de juguete", "Hecho de plastico. Una rareza hoy en dia.", -1, 100, 3);

    Armadura venda("Venda", "Ya ha sido usada varias veces.", -1,150, 0);

    jugador.agregarItem(&dulceMonstruo);
    jugador.agregarItem(&donaArania);
    jugador.agregarItem(&heladoNice);
    jugador.agregarItem(&palo);
    jugador.agregarItem(&toyKnife);
    jugador.agregarItem(&venda);

    jugador.set_arma_equip(&palo);
    jugador.set_armadura_equip(&venda);

    Arma guanteDuro("Guante Duro", "Un guante de cuero rosa desgastado. Para gente con cinco dedos.", 50, 50, 5);
    Armadura bandana("Bandana Varonil", "Ha sido algo desgastada. Tiene dibujada abs en ella.", 50, 50, 7);

    // Tiendas
    Tienda snowdinShop("QC", "* Hola, viajero. \n* Como puedo ayudarte?\n");
    snowdinShop.agregarItem(&guanteDuro);
    snowdinShop.agregarItem(&bandana);

    //---------------------------------------------

    jugador.abrirInventario();
    jugador.mostrarItems();
    jugador.mostrarStats();

    snowdin.mostrarInfo();
    snowdin.mostrarHabitantes();
    greaterDog.mostrarInfo();

    jugador.set_oro(100);

    snowdinShop.mostrarOpciones(jugador);
    snowdinShop.mostrarItems(jugador);
    snowdinShop.comprar(jugador, 0);
    snowdinShop.comprar(jugador, 1);
    snowdinShop.vender(jugador, 0);

    jugador.abrirInventario();
    jugador.mostrarItems();
    jugador.set_arma_equip(&guanteDuro);
    jugador.set_armadura_equip(&venda);
    jugador.mostrarStats();

    return 0;
}


