#include "BrazoRobotico.h"
#include <iostream>

int main() {
    // Crea una instancia de la clase
    BrazoRobotico brazo;

    // Mueve el brazo a unas nuevas coordenadas
    brazo.mover(5.0, 10.0, 15.0);

    // Coge el objeto
    brazo.coger();

    // Intentamos coger otro objeto (no debería dejarnos hacerlo)
    brazo.coger();

    // Movemos el brazo mientras sostiene el objeto
    brazo.mover(10.0, 20.0, 30.0);

    // Soltamos el objeto
    brazo.soltar();

    // Intentamos soltar el objeto que ya no está sosteniendo
    brazo.soltar();

    return 0;
}

