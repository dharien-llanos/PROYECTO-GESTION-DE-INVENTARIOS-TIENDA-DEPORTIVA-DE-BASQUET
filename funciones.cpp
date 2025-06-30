#include<iostream>
#include<iomanip>
#include "funciones.h"
using namespace std;

void mostrar_camisetas(camisetas arr[], int &n1) {
    cout << left << setw(15) << "MODELO" << setw(10) << "TALLA" << setw(15) << "MARCA"
         << setw(10) << "PRECIO" << setw(10) << "CANTIDAD" << endl;
    for (int i = 0; i < n1; i++) {
        cout << left << setw(15) << arr[i].modelo << setw(10) << arr[i].talla
             << setw(15) << arr[i].marca << setw(10) << arr[i].precio
             << setw(10) << arr[i].cantidad << endl;
    }
}
void agregar_camisetas(camisetas arr[], int &n1) {
    cout << "Ingrese modelo: "; cin >> arr[n1].modelo;
    cout << "Ingrese talla: "; cin >> arr[n1].talla;
    cout << "Ingrese marca: "; cin >> arr[n1].marca;
    cout << "Ingrese precio: "; cin >> arr[n1].precio;
    cout << "Ingrese cantidad: "; cin >> arr[n1].cantidad;
    n1++;
}
