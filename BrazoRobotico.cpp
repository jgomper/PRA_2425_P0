#include "BrazoRobotico.h"
#include <iostream>

BrazoRobotico::BrazoRobotico(double x, double y, double z, bool sujetando)
    : x(x), y(y), z(z), sujetando(sujetando) {}


double BrazoRobotico::getX() const {
       	return x;
}
double BrazoRobotico::getY() const {
       	return y;
}
double BrazoRobotico::getZ() const {
       	return z;
}
bool BrazoRobotico::esta_sujetando() const { 
	return sujetando;
}

void BrazoRobotico::mover(double x1, double y1, double z1) {
    x = x1;
    y = y1;
    z = z1;
    std::cout << "Brazo movido a (" << x << ", " << y << ", " << z << ")." << std::endl;
}

void BrazoRobotico::coger() {
    if (!sujetando) {
        sujetando = true;
        std::cout << "Objeto cogido." << std::endl;
    } else {
        std::cout << "Ya está sujetando un objeto." << std::endl;
    }
}

void BrazoRobotico::soltar() {
    if (sujetando) {
        sujetando = false;
        std::cout << "Objeto soltado." << std::endl;
    } else {
        std::cout << "No hay ningún objeto que soltar." << std::endl;
    }
}

