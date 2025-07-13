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
{"Negro", "44", "Jordan", 300.00, 5},
    {"Rojo", "42", "Nike", 320.00, 4},
    {"Blanco", "41", "Under Armour", 280.00, 6},
    {"Azul", "45", "Nike", 310.00, 3},
    {"Verde", "43", "Adidas", 275.00, 7},
    {"Morado", "46", "Jordan", 330.00, 5},
    {"Gris", "40", "Nike", 295.00, 6},
    {"Amarillo", "44", "Under Armour", 305.00, 4},
    {"Celeste", "42", "Nike", 290.00, 5},
    {"Naranja", "41", "Jordan", 325.00, 4}
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
{"Naranja", "7", "Spalding", 90.00, 10},
    {"Marron", "6", "Wilson", 85.00, 9},
    {"Negro", "5", "Nike", 75.00, 8},
    {"Blanco", "7", "Molten", 95.00, 7},
    {"Gris", "6", "Spalding", 88.00, 6},
    {"Rojo", "5", "Wilson", 82.00, 8},
    {"Azul", "7", "Jordan", 100.00, 5},
    {"Verde", "6", "Nike", 87.00, 9},
    {"Morado", "5", "Spalding", 92.00, 6},
    {"Celeste", "7", "Wilson", 89.00, 7}
};
ventas registrar[tem];
	registrar[v1].precio_total=0;
    double total=0;
	int opcion;
	bool salir = false;
	
	do{
		cout << "---------------------------------------------------------------------" << endl;
        cout << "                              MENU PRINCIPAL                         " << endl;
        cout << "---------------------------------------------------------------------" << endl;
        cout << "1. Mostrar lista de productos" << endl;
        cout << "2. Agregar producto" << endl;
        cout << "3. Eliminar un producto" << endl;
        cout << "4. Actualizar datos de producto" << endl;
        cout << "5. Ordenar alfabeticamnete los productos"<< endl;
        cout << "6. Registrar venta" << endl;
        cout << "7. Producto mas vendido" << endl;
        cout << "8. Historial de ventas" << endl;
        cout << "9. Mostrar dinero acumulado" <<endl;
        cout << "10.Buscar un producto"<< endl;
        cout << "0. Salir" << endl;
        cout << "\n___________________________________________________________________" << endl;
        cout << "\nIngrese su opcion: ";
        cin  >> opcion;
        cout << endl;
        system("cls");
		switch(opcion) {   
			case 1: {
				int producto;
				do {   
				    cout << "--------------------------------------------------------------------------------------------" << endl;
                    cout << "                                      LISTA DE PRODUCTOS                                    " << endl;
                    cout << "--------------------------------------------------------------------------------------------" << endl;
                    cout << "1. Camisetas" << endl;
                    cout << "2. Shorts" << endl;
                    cout << "3. Zapatillas" << endl;
                    cout << "4. Medias" << endl;
                    cout << "5. Balones" << endl;
                    cout << "0. Atras" << endl;
                    cout << endl;
                    cout << "\nIngrese su opcion: ";
					cin  >>producto;
					cout << endl;
					system("cls");
					switch(producto) {  
						case 1:mostrar_camisetas(camiseta, n1);break;
						case 2:mostrar_shorts(pantalon_corto, n2);break;
						case 3:mostrar_zapatillas(calzado, n3);break;
						case 4:mostrar_medias(media_larga, n5);break;
						case 5:mostrar_balones(pelota, n6);break;
						case 0:break; 
						default: cout << "Opcion invalida. Por favor, seleccione una opcion valida." << endl;
                    }
				}
				while(producto!=0);
				break;
			}
			case 2: {
				int op;
				do {  
				    cout << "---------------------------------------------------------------------" << endl;
                    cout << "                      AGREGAR PRODUCTO                               " << endl;
                    cout << "---------------------------------------------------------------------" << endl;
                    cout << "Seleccione el producto a agregar" << endl;
                    cout << "1. Camisetas" << endl;
                    cout << "2. Shorts" << endl;
                    cout << "3. Zapatillas" << endl;
                    cout << "4. Medias" << endl;
                    cout << "5. Balones" << endl;
                    cout << "0. Atras" << endl;
                    cout << endl;
                    cout << "\nIngrese su opcion: "; 
					cin>>op;
					system("cls");
					switch(op) {   
						case 1:agregar_camisetas(camiseta, n1); break;
						case 2:agregar_shorts(pantalon_corto, n2); break;
						case 3:agregar_zapatillas(calzado, n3); break;
						case 4:agregar_medias(media_larga, n5); break;
						case 5:agregar_balones(pelota, n6); break;
						case 0: break; 
                        default: cout << "Opcion invalida. Por favor, seleccione una opcion valida." << endl;
                        break;
					}
				}
				while(op!=0); 
				break;
			}
			case 3:{
				int eliminar;
				do {   
				    cout << "--------------------------------------------------------------------------------------------" << endl;
                    cout << "                                    LISTA DE  PRODUCTOS                                     " << endl;
                    cout << "--------------------------------------------------------------------------------------------" << endl;
                    cout << "Seleccione el producto" << endl;
                    cout << "1. Camisetas" << endl;
                    cout << "2. Shorts" << endl;
                    cout << "3. Zapatillas" << endl;
                    cout << "4. Medias" << endl;
                    cout << "5. Balones" << endl;
                    cout << "0. Atras" << endl;
                    cout << endl;
                    cout << "\nIngrese su opcion: "; 
					cin>>eliminar;
					system("cls");
					switch(eliminar) 
					{   
						case 1:
						    mostrar_camisetas(camiseta, n1);
						    eliminar_camisetas(camiseta, n1); break;
						case 2: 
							mostrar_shorts(pantalon_corto, n2); 
							eliminar_shorts(pantalon_corto, n2); break;
						case 3:
							mostrar_zapatillas(calzado, n3);	
							eliminar_zapatillas(calzado, n3); break;

						case 4:
							mostrar_medias(media_larga, n5);
							eliminar_medias(media_larga, n5); break;
						case 5:
							mostrar_balones(pelota, n6);
							eliminar_balones(pelota, n6); break;
						case 0: break; 
                        default: cout << "Opcion invalida. Por favor, seleccione una opcion valida." << endl;
                        break;
					}
				}
				while(eliminar!=0); 
				break;
			}
			case 4:{ 
			    int producto_actualizar;
			    bool indice_valido = false;
			    do { 
			        mostar_menu_principal( );
                    cout << "\nSeleccione el producto que desea actualizar: ";
                    cin  >> producto_actualizar;
                    system("cls");
                    if (producto_actualizar >= 1 or producto_actualizar <= 6){
                        int indice_actualizar;
                        switch (producto_actualizar){
                            case 1: {submenu_actualizar_camisetas(camiseta,n1);break;}
                            case 2: {submenu_actualizar_shorts(pantalon_corto,n2);break;}
                            case 3: {submenu_actualizar_zapatillas(calzado,n3);break;}
                            case 4: {submenu_actualizar_medias(media_larga,n5);break;}
                            case 5: {submenu_actualizar_balones(pelota,n6);break;}
                            default: break;}
                    } else {
                    	cout << "_______________________________________________________________________" << endl;
                        cout << "\n                            OPCION INVALIDA                          " << endl;
				        cout << "\n                    POR FAVOR INREGESE UNA OPCION VALIDA             " << endl;    
                    }
                } while (producto_actualizar != 0);
                break;
            }
		    case 5:{
		    	int producto_ordenado;
            	bool indice_valido = false;
            	do {
			        mostrar_menu_ordenar( );
                    cout << "\nSeleccione un producto : ";
                    cin  >> producto_ordenado;
                    cout << endl;
		            system("cls");
                    if (producto_ordenado >= 1 or producto_ordenado <= 6){
                    	int indice_ordenado;
                        switch (producto_ordenado){
                            case 1: {ordenar_camisetas(camiseta,n1),mostrar_camisetas_ordenadas(camiseta,n1);break;}
                            case 2: {ordenar_shorts(pantalon_corto,n2),mostrar_shorts_ordenados(pantalon_corto,n2);break;}
                            case 3: {ordenar_zapatillas(calzado,n3),mostrar_zapatillas_ordenadas(calzado,n3);break;}
                            case 4: {ordenar_medias(media_larga,n5),mostrar_medias_ordenadas(media_larga,n5);break;}
                            case 5: {ordenar_balones(pelota,n6),mostrar_balones_ordenados(pelota,n6);break;}
                            default:break;}
                    } else {
                    	cout << "_______________________________________________________________________" << endl;
                        cout << "\n                            OPCION INVALIDA                          " << endl;
				        cout << "\n                    POR FAVOR INREGESE UNA OPCION VALIDA             " << endl;    
                    }
                } while (producto_ordenado != 0);
				break;
			}
            case 6:
            	int op;
            	do {  
				    cout << "---------------------------------------------------------------------" << endl;
                    cout << "                      LISTA DE  PRODUCTOS                               " << endl;
                    cout << "---------------------------------------------------------------------" << endl;
                    cout << "Seleccione el producto a vender" << endl; 
                    cout << "1. Camisetas" << endl;
                    cout << "2. Shorts" << endl;
                    cout << "3. Zapatillas" << endl;
                    cout << "4. Medias" << endl;
                    cout << "5. Balones" << endl;
                    cout << "6. Mostrar el total" << endl;
                    cout << "0. Atras" << endl;
                    cout << endl;
                    cout << "\nIngrese su opciÃ³n: "; 
					cin>>op;
					system("cls");
					switch(op) 
					{   
						case 1:
							cout<<"--------------------------------------------------------------------------------------------"<<endl;
							cout<<"                                       PRODUCTOS ACTUALES                                   "<<endl;
							cout<<"--------------------------------------------------------------------------------------------"<<endl;
							mostrar_camisetas(camiseta, n1);
							registar_ventas(registrar, camiseta, n1, v1, cont1);
							total=total+registrar[v1].precio_total;
							break;
						case 2:
						    total=0;
							cout<<"--------------------------------------------------------------------------------------------"<<endl;
							cout<<"                                       PRODUCTOS ACTUALES                                   "<<endl;
							cout<<"--------------------------------------------------------------------------------------------"<<endl;
							mostrar_shorts(pantalon_corto, n2);
							registar_ventas(registrar, pantalon_corto, n2, v1, cont2);
							total=total+registrar[v1].precio_total;
							break;
						case 3:
						    total=0; 
							cout<<"--------------------------------------------------------------------------------------------"<<endl;
							cout<<"                                       PRODUCTOS ACTUALES                                   "<<endl;
							cout<<"--------------------------------------------------------------------------------------------"<<endl;
							mostrar_zapatillas(calzado, n3);
							registar_ventas(registrar, calzado, n3, v1, cont3);
							total=total+registrar[v1].precio_total;
							break;
						case 4:
						    total=0; 
							cout<<"--------------------------------------------------------------------------------------------"<<endl;
							cout<<"                                       PRODUCTOS ACTUALES                                   "<<endl;
							cout<<"--------------------------------------------------------------------------------------------"<<endl;
							mostrar_medias(media_larga, n5);
							registar_ventas(registrar, media_larga, n5, v1, cont5);
							total=total+registrar[v1].precio_total;
							break;
						case 5:
						    total=0; 
							cout<<"--------------------------------------------------------------------------------------------"<<endl;
							cout<<"                                       PRODUCTOS ACTUALES                                   "<<endl;
							cout<<"--------------------------------------------------------------------------------------------"<<endl;
							mostrar_balones(pelota, n6);
							registar_ventas(registrar, pelota, n6, v1, cont6);
							total=total+registrar[v1].precio_total;
							break;
						case 6:
							if(total!=0)
							{
								cout<<"------------------------------------------------------------------------------"<<endl;
							    cout<<"                                    CAJERO                                     "<<endl;
							    cout<<"------------------------------------------------------------------------------"<<endl;
								cout<<"Precio total: S/. "<<total<<endl;
							}
							else
							{
								cout<<"--------------------------------------------------------------------------------"<<endl;
								cout<<"                              REGISTRE UNA VENTA                                "<<endl;
								cout<<"--------------------------------------------------------------------------------"<<endl;
							}
							break;
						case 0: break; 
                        default: cout << "Opcion invalida. Por favor, seleccione una opcion valida." << endl;
                        break;
					}
				}
				while(op!=0); 
				v1++;
				total=0;
				registrar[v1].precio_total=0;
            	break;
            case 7:
				producto_mas_vendido(cont1, cont2, cont3, cont4, cont5, cont6);
				break;
			case 8:
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"                         HISTORIAL DE VENTAS                         "<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				historial_ventas(registrar, v1);
				break;
			case 9:
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<" DINERO ACUMULADO: S/. "<<dinero_acumulado(registrar, v1)<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				break;
				
			case 10:{
				int producto_buscado;
            	bool indice_valido = false;
            	do {
			        mostrar_menu_buscar_producto( );
                    cout << "\nSeleccione un producto : ";
                    cin  >> producto_buscado;
                    cout << endl;
		            system("cls");
                    if (producto_buscado >= 1 or producto_buscado <= 6){
                    	int indice_buscado;
                        switch (producto_buscado){
                            case 1: {buscar_camisetas(camiseta, n1); break;}
                            case 2: {buscar_shorts(pantalon_corto, n2); break;}
                            case 3: {buscar_zapatillas(calzado, n3); break;}
                            case 4: {buscar_medias(media_larga,n5);break;}
                            case 5: {buscar_balones(pelota,n6);break;}
                            default: break;}
                    } else {
                    	cout << "_______________________________________________________________________" << endl;
                        cout << "\n                            OPCION INVALIDA                          " << endl;
				        cout << "\n                    POR FAVOR INREGESE UNA OPCION VALIDA             " << endl;    
                    }
                } while (producto_buscado != 0);	

				break;
			}	
            case 0: {
            	cout << "\n______________________________________________________________________" << endl;
                cout << "\n    S A L I E N D O       D E L      P R O G R A M A  .    .   .     " << endl;
                salir = true; 
                break;
            }
            default: {
            	cout << "\n_____________________________________________________________________" << endl;
                cout << "\n                            OPCION INVALIDA                          " << endl;
				cout << "\n                    POR FAVOR INREGESE UNA OPCION VALIDA             " << endl;
                break;
            }
        }
    } while (!salir);
    
    getch();
    return 0;
}