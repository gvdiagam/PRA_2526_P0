#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

class BrazoRobotico {
private:
    double x, y, z; // Coordenadas 3D
    bool sujetandoObjeto; // Si está sujetando un objeto o no

public:
    // Constructor
    BrazoRobotico(double x, double y, double z, bool sujeto = false);

    // Métodos consultores (getters)
    double obtenerX();
    double obtenerY();
    double obtenerZ();
    bool estaSujetandoObjeto();

    // Método para coger un objeto
    void coger();

    // Método para soltar un objeto
    void soltar();

    // Método para mover el brazo a nuevas coordenadas
    void mover(double nuevoX, double nuevoY, double nuevoZ);
};

#endif // BRAZOROBOTICO_H

