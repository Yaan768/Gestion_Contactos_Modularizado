// contactos.h
#ifndef CONTACTOS_H
#define CONTACTOS_H

#include <string>
using namespace std;

const int MAX_CONTACTOS = 100;

struct ContactoEmail {
    string nombreCompleto;
    string sexo;
    int edad;
    string telefono;
    string email;
    string nacionalidad;
};

extern ContactoEmail contactos[MAX_CONTACTOS];
extern int totalContactos;

void agregarContacto();
void eliminarContacto();
void mostrarContactos();
void mostrarContactosPorServidor();

#endif
