// main.cpp
#include <iostream>
#include "contactos.h"
using namespace std;

int main() {
    char opcion;

    do {
        cout << "\n===== MENU DE GESTION DE CONTACTOS =====\n";
        cout << "a) Agregar un contacto\n";
        cout << "b) Eliminar un contacto\n";
        cout << "c) Mostrar listado general de contactos\n";
        cout << "d) Mostrar listado ordenado por servidor de correo\n";
        cout << "e) Salir del programa\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 'a': agregarContacto(); break;
            case 'b': eliminarContacto(); break;
            case 'c': mostrarContactos(); break;
            case 'd': mostrarContactosPorServidor(); break;
            case 'e': cout << "Saliendo del programa...\n"; break;
            default: cout << "Opcion invalida. Intente nuevamente.\n";
        }

    } while (opcion != 'e');

    return 0;
}

