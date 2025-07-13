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