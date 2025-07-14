#ifndef FUNCIONES_H
#define FUNCIONES_H
#include<iostream>
#include"estructuras.h"

void mostrar_camisetas(camisetas arr[], int &n1);
void mostrar_shorts(shorts arr[], int &n2);
void mostrar_zapatillas(zapatillas arr[], int &n3);
void mostrar_medias(medias arr[], int &n5);
void mostrar_balones(balones arr[], int &n6);



void agregar_camisetas(camisetas arr[], int &n1);
void agregar_shorts(shorts arr[], int &n2);
void agregar_zapatillas(zapatillas arr[], int &n3);
void agregar_medias(medias arr[], int &n5);
void agregar_balones(balones arr[], int &n6);


void mostar_menu_principal( );

void submenu_actualizar_camisetas(camisetas camiseta[], int& n1);
void submenu_actualizar_shorts(shorts pantalon_corto[], int& n2);
void submenu_actualizar_zapatillas(zapatillas zapatillas[], int& n3);
void submenu_actualizar_medias(medias medias[], int& n5);
void submenu_actualizar_balones(balones balones[], int& n6);

void actualizar_camisetas(camisetas arr[], int &n1, int indice);
void actualizar_shorts(shorts arr[], int &n2, int indice);
void actualizar_zapatillas(zapatillas arr[], int &n3, int indice);
void actualizar_medias(medias arr[], int &n5, int indice);
void actualizar_balones(balones arr[], int &n6, int indice);


void eliminar_camisetas(camisetas arr[], int &n1);
void eliminar_shorts(shorts arr[], int &n2);
void eliminar_zapatillas(zapatillas arr[], int &n3);
void eliminar_medias(medias arr[], int &n5);
void eliminar_balones(balones arr[], int &n6);


void registar_ventas(ventas arr1[], camisetas arr2[], int &n1, int &v1, int &cont1);
void registar_ventas(ventas arr1[], shorts arr2[], int &n2, int &v1, int &cont2);
void registar_ventas(ventas arr1[], zapatillas arr2[], int &n3, int &v1, int &cont3);
void registar_ventas(ventas arr1[], medias arr2[], int &n5, int &v1, int &cont5);
void registar_ventas(ventas arr1[], balones arr2[], int &n6, int &v1, int &cont6);


void producto_mas_vendido(int &cont1, int &cont2, int &cont3, int &cont4, int &cont5);


void historial_ventas(ventas arr1[], int &v1);

double dinero_acumulado(ventas arr[], int &v1);


void mostrar_menu_ordenar( );

bool comparar_camisetas(const camisetas &a, const camisetas &b);
void ordenar_camisetas(camisetas camiseta[], int &n1);
void mostrar_camisetas_ordenadas( camisetas camiseta[], int &n1);

bool comparar_shorts( const shorts &a, const shorts &b);
void ordenar_shorts(shorts pantalon_corto[], int &n2);
void mostrar_shorts_ordenados(shorts pantalon_corto[], int &n2);

bool comparar_zapatillas(const zapatillas &a, const zapatillas &b);
void ordenar_zapatillas(zapatillas calzado [], int &n3);
void mostrar_zapatillas_ordenadas(zapatillas calzado[], int &n3);

bool comparar_medias(const medias &a, const medias &b);
void ordenar_medias( medias media_larga [], int &n5);
void mostrar_medias_ordenadas( medias media_larga [], int &n5);


bool comparar_balones(const balones &a, const balones &b);
void ordenar_balones(balones pelota[], int &n6);
void mostrar_balones_ordenados (balones pelota[], int &n6);


std::string convertir_caracter(const std::string& palabra);
void mostrar_menu_buscar_producto();
void buscar_camisetas(camisetas camiseta[], int &n1);
void buscar_shorts(shorts pantalon_corto[], int &n2);
void buscar_zapatillas(zapatillas calzado[], int &n3);
void buscar_medias(medias media_larga[], int &n5);
void buscar_balones(balones pelota[], int &n6);


#endif
