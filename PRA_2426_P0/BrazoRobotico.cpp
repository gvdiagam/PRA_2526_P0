#include "BrazoRobotico.h"

// Constructor usando this-> para diferenciar entre parámetros y atributos
BrazoRobotico::BrazoRobotico(double x, double y, double z, bool sujeto) {
    this->x = x;
    this->y = y;
    this->z = z;
    this->sujetandoObjeto = sujeto;
}

// Métodos consultores
double BrazoRobotico::obtenerX() { 
	return x; }

double BrazoRobotico::obtenerY() { 
	return y; }

double BrazoRobotico::obtenerZ() { 
	return z; }

bool BrazoRobotico::estaSujetandoObjeto() { 
	return sujetandoObjeto; }

// Método para coger un objeto
void BrazoRobotico::coger() {
    if (!sujetandoObjeto) {
        sujetandoObjeto = true;
    }
}

// Método para soltar un objeto
void BrazoRobotico::soltar() {
    if (sujetandoObjeto) {
        sujetandoObjeto = false;
    }
}

// Método para mover el brazo a nuevas coordenadas
void BrazoRobotico::mover(double nuevoX, double nuevoY, double nuevoZ) {
    x = nuevoX;
    y = nuevoY;
    z = nuevoZ;
}

