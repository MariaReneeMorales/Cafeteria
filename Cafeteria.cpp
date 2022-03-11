#include <stdio.h> 
#include <iostream> 
#include <math.h> 
#include <string.h> 
#include <conio.h>
#include <windows.h>
using namespace std;

int main(){
	//Permite imprimir tildes, ñ o caracteres especiales. 
	setlocale(LC_ALL, "");
	
	//Definición de variables
	int lnMinutos, lnSegundos, lnTiempoFuera;
	int lnMesa, lnMenu, lnOpc;
	int lnCantMenu = 3; //Cantidad de opciones en el menú.
	string lcIngreso;
	string laMenu[lnCantMenu] = {"Plato del día: 3 minutos", "Recomendación del chef: 5 minutos", "Pizza Napolitana: 2 minutos"};
	int laMin[lnCantMenu] = {3, 5, 2};
	int laSeg[lnCantMenu] = {0, 0, 0};

	//Inicializar nuestra variables.
	lnMesa = 0;
	
	do{
		//Título. 
		cout << endl << endl;
		cout << "                       C A F E T E R Í A       X Y Z" << endl << endl << endl << endl;
		
	    //Ingreso a Cafetería.
		cout << "— Ingrese a la cafetería oprimiendo el botón Z: ";
		cin >> lcIngreso;
	    
	    //Condición si el botón es z.
		if (lcIngreso == "z" || lcIngreso == "Z"){
			
			//Contador número de mesa.
			lnMesa = lnMesa + 1;
			cout << "— Su número de mesa es: " << lnMesa << endl << endl;
			cout << "                           M E N U " << endl << endl;
			
			//Impresión de menú
			for (lnMenu = 0; lnMenu < lnCantMenu; lnMenu ++){
				cout << "            " << lnMenu << " - " << laMenu[lnMenu] << endl;
			}
			
			//Número de mesa.
			cout << endl;
			cout << "— Seleccione el número del menú que desea ordenar: ";
			cin >> lnOpc;
			
			//Temporizador.
			lnMinutos = laMin[lnOpc];
			lnSegundos = laSeg[lnOpc];
			lnTiempoFuera = 0;
							
			while (lnTiempoFuera == 0){
							
				if (lnMinutos == 0 && lnSegundos == 0){
					lnTiempoFuera = 1;
				}
				else if (lnSegundos == 0){
					lnMinutos--;
					lnSegundos = 59;
				}
				
				//Se le indica al usuario que la orden esta lista.
				system("cls");
				cout << endl << endl;
				cout << "      ¡Su orden se ha generado con éxito!" << endl << endl << endl;
				cout << "              Tiempo Restante " << endl;
				cout << "                    " << lnMinutos << ":" << lnSegundos << endl;
				Sleep(1000); //Pausa en milesegundos.
				lnSegundos--;
			}	
			system("cls");
			cout << endl << endl;
			cout << "                        ¡Su pedido está listo y ha sido entregado éxitosamente!" << endl << endl << endl << endl;
			cout << "— Oprima enter para continuar..." << endl;
			_getch();
			system("cls");
		}
		cout << endl;
	}while(lcIngreso == "z" || lcIngreso == "Z");
	
	return 0;
}
