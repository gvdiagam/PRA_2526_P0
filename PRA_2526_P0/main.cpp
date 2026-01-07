#include <iostream>
#include "BrazoRobotico.h"

int main() {
    // Crear una instancia del brazo robótico en las coordenadas (0, 0, 0)
    BrazoRobotico brazo(0, 0, 0); 

    // Mover el brazo a una nueva posición
    brazo.mover(1.5, 2.0, 3.0);
    std::cout << "Coordenadas del brazo: (" << brazo.obtenerX() << ", " << brazo.obtenerY() << ", " << brazo.obtenerZ() << ")\n";

    // Coger un objeto
    brazo.coger();
    std::cout << "El brazo está sujetando un objeto: " << (brazo.estaSujetandoObjeto() ? "Sí" : "No") << "\n";

    // Soltar el objeto
    brazo.soltar();
    std::cout << "El brazo está sujetando un objeto: " << (brazo.estaSujetandoObjeto() ? "Sí" : "No") << "\n";

    return 0;
}

