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
	} while (lcIngreso == "z" || lcIngreso == "Z");
	
	return 0;
}
