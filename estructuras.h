#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

#include <string>
using namespace std;

struct camisetas {
    string modelo;
    string talla;
    string marca;
    double precio;
    int cantidad;
};

struct shorts {
    string color;
    string talla;
    string marca;
    double precio;
    int cantidad;
};

struct zapatillas {
    string color;
    string talla;
    string marca;
    double precio;
    int cantidad;
};
struct medias {
    string color;
    string talla;
    string marca;
    double precio;
    int cantidad;
};

struct balones {
    string color;
    string tamano;
    string marca;
    double precio;
    int cantidad;
};

struct ventas {
    double precio_total = 0;
};

#endif