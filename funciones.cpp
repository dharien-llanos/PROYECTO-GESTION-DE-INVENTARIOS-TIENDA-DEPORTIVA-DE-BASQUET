#include<iostream>
#include"funciones.h"
#include"estructuras.h"
#include<iomanip>
using namespace std;

void mostrar_camisetas(camisetas arr[], int &n1)
{
    cout<<"N.\t"<<setw(16)<<"MODELO"<<setw(17)<<"TALLA"<<setw(14)<<"MARCA"<<setw(18)<<"PRECIO"<<setw(17)<<"CANTIDAD"<<endl;
    cout<<"--------------------------------------------------------------------------------------------"<<endl;
    for(int i=0; i<n1; i++)
    {
        cout<<i+1<<"\t"\
        <<setw(15)<<arr[i].modelo<<"\t"\
        <<setw(15)<<arr[i].talla<<"\t"\
        <<setw(15)<<arr[i].marca<<"\t"\
        <<setw(15)<<arr[i].precio<<"\t"\
        <<setw(15)<<arr[i].cantidad<<endl;
    }
}
