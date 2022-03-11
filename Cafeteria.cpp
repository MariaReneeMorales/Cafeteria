#include <stdio.h> 
#include <iostream> 
#include <math.h> 
#include <string.h> 
#include <conio.h>
#include <windows.h>
using namespace std;

int main(){
	//Permite imprimir tildes, √± o caracteres especiales. 
	setlocale(LC_ALL, "");
	
	//Definici√≥n de variables
	int lnMinutos, lnSegundos, lnTiempoFuera;
	int lnMesa, lnMenu, lnOpc;
	int lnCantMenu = 3; //Cantidad de opciones en el men√∫.
	string lcIngreso;
	string laMenu[lnCantMenu] = {"Plato del d√≠a: 3 minutos", "Recomendaci√≥n del chef: 5 minutos", "Pizza Napolitana: 2 minutos"};
	int laMin[lnCantMenu] = {3, 5, 2};
	int laSeg[lnCantMenu] = {0, 0, 0};

	//Inicializar nuestra variables.
	lnMesa = 0;
	
	do{
		//T√≠tulo. 
		cout << endl << endl;
		cout << "                       C A F E T E R √ç A       X Y Z" << endl << endl << endl << endl;
		
	    //Ingreso a Cafeter√≠a.
		cout << "‚Äî Ingrese a la cafeter√≠a oprimiendo el bot√≥n Z: ";
		cin >> lcIngreso;
	    
	    //Condici√≥n si el bot√≥n es z.
		if (lcIngreso == "z" || lcIngreso == "Z"){
			
			//Contador n√∫mero de mesa.
			lnMesa = lnMesa + 1;
			cout << "‚Äî Su n√∫mero de mesa es: " << lnMesa << endl << endl;
			cout << "                           M E N U " << endl << endl;
			
			//Impresi√≥n de men√∫
			for (lnMenu = 0; lnMenu < lnCantMenu; lnMenu ++){
				cout << "            " << lnMenu << " - " << laMenu[lnMenu] << endl;
			}

			//N˙mero de mesa.
			cout << endl;
			cout << "ó Seleccione el n˙mero del men˙ que desea ordenar: ";
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
				cout << "      °Su orden se ha generado con Èxito!" << endl << endl << endl;
				cout << "              Tiempo Restante " << endl;
				cout << "                    " << lnMinutos << ":" << lnSegundos << endl;
				Sleep(1000); //Pausa en milesegundos.
				lnSegundos--;
			}
			system("cls");
			cout << endl << endl;
			cout << "                        °Su pedido est· listo y ha sido entregado Èxitosamente!" << endl << endl << endl << endl;
			cout << "ó Oprima enter para continuar..." << endl;
			_getch();
			system("cls");
		}
		cout << endl;
	} while (lcIngreso == "z" || lcIngreso == "Z");
	
	return 0;
}
