#include<iostream>
#include<string>
#include"funciones.h"
#include"estructuras.h"
#include<iomanip>
#include<conio.h>
using namespace std;

int main() {  
    const int tam=100;
    const int tem=100;
int n1=10, n2=10, n3=10, n4=10, n5=10, n6=10, v1=0;
int cont1=0, cont2=0, cont3=0, cont4=0, cont5=0, cont6=0;
camisetas camiseta[tam]={
{"Lakers", "M", "Nike", 120.00, 5},
    {"Warriors", "L", "Under Armour", 115.00, 6},
    {"Bulls", "S", "Nike", 110.00, 8},
    {"Celtics", "M", "Nike", 120.00, 7},
    {"Nets", "M", "Jordan", 130.00, 4},
    {"Heat", "L", "Nike", 125.00, 5},
    {"Suns", "S", "Jordan", 115.00, 6},
    {"Bucks", "M", "Nike", 120.00, 3},
    {"Mavericks", "M", "Nike", 110.00, 7},
    {"Clippers", "L", "Jordan", 125.00, 6}
};
shorts pantalon_corto[tam]={
{"Negro", "M", "Nike", 60.00, 8},
    {"Blanco", "L", "Under Armour", 55.00, 7},
    {"Rojo", "S", "Nike", 58.00, 9},
    {"Azul", "M", "Jordan", 65.00, 6},
    {"Verde", "L", "Adidas", 62.00, 5},
    {"Morado", "S", "Nike", 59.00, 8},
    {"Gris", "M", "Under Armour", 60.00, 6},
    {"Amarillo", "L", "Nike", 64.00, 4},
    {"Naranja", "S", "Jordan", 63.00, 7},
    {"Celeste", "M", "Adidas", 57.00, 9}
};
zapatillas calzado[tam]={
{"Negro", 44, "Jordan", 300.00, 5},
    {"Rojo", 42, "Nike", 320.00, 4},
    {"Blanco", 41, "Under Armour", 280.00, 6},
    {"Azul", 45, "Nike", 310.00, 3},
    {"Verde", 43, "Adidas", 275.00, 7},
    {"Morado", 46, "Jordan", 330.00, 5},
    {"Gris", 40, "Nike", 295.00, 6},
    {"Amarillo", 44, "Under Armour", 305.00, 4},
    {"Celeste", 42, "Nike", 290.00, 5},
    {"Naranja", 41, "Jordan", 325.00, 4}
};
medias media_larga[tam]={
{"Negro", "M", "Nike", 18.00, 10},
    {"Blanco", "S", "Under Armour", 17.00, 9},
    {"Rojo", "L", "Nike", 19.00, 8},
    {"Azul", "M", "Adidas", 16.00, 7},
    {"Verde", "L", "Nike", 18.00, 6},
    {"Amarillo", "S", "Jordan", 20.00, 8},
    {"Gris", "M", "Under Armour", 17.00, 6},
    {"Morado", "L", "Nike", 18.00, 5},
    {"Celeste", "M", "Adidas", 16.00, 9},
    {"Naranja", "S", "Nike", 17.00, 10}
};
balones pelota[tam]={
{"Naranja", 7, "Spalding", 90.00, 10},
    {"MarrÃ³n", 6, "Wilson", 85.00, 9},
    {"Negro", 5, "Nike", 75.00, 8},
    {"Blanco", 7, "Molten", 95.00, 7},
    {"Gris", 6, "Spalding", 88.00, 6},
    {"Rojo", 5, "Wilson", 82.00, 8},
    {"Azul", 7, "Jordan", 100.00, 5},
    {"Verde", 6, "Nike", 87.00, 9},
    {"Morado", 5, "Spalding", 92.00, 6},
    {"Celeste", 7, "Wilson", 89.00, 7}
};