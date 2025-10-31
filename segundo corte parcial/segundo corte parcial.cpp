//PARCIAL PARTE PRACTICA SEGUNDO CORTE						JUAN DAVID VERA ROJAS 
#include <iostream>
using namespace std;

double calculartotal(double distancia[], double costokm[], int numviajes) {
	double total = 0;
	for (int i = 0; i < numviajes; i++) {
		total += distancia[i] * costokm[i];

	}
	return total;
}
double promediodistancia(double distancia[], int numviajes) {
	double prom = 0;
	for (int i = 0; i < numviajes; i++) {
		prom += distancia[i] / numviajes;
	}
	return prom;
	} 


int main() {
	string nombres[10];
	int numviajes;
	double cantidadcon;
	double distancia[10], costo[10];
	double totalganado[10], promedio[10];
	double mayoringreso = 0;
	string mejorconductor;
	
	cout << "Ingrese la cantidad de conductores " << endl;
	cin >> cantidadcon;
	while (cantidadcon < 1 || cantidadcon > 10) {
		cout << "debe ser un numero de 1 a 10, intente de nuevo" << endl;
		cin >> cantidadcon;
	}
	
	for (int i = 0; i < cantidadcon; i++) {
		cout << "ingrese nombre del conductor " << (i + 1) << ": " << endl;
		cin >> nombres[i];
		

		cout << "ingrese el numero de viajes " << endl;
		cin >> numviajes;
		while (numviajes < 1 || numviajes > 10) {
			cout << "ingresa un valor entre 1 y 10 " << endl;
			cin >> numviajes;
		}
		for (int j = 0; j < numviajes; j++) {
			cout << "datos del viaje " << (j + 1) << endl;
			cout << "distancia en km : " << endl;
			cin >> distancia[j];
			while (distancia[j] < 0) {
				cout << "no se permiten ingresar valores negativos, ingrese otro valor " << endl;
				cin >> distancia[j];
			}
			
			cout << "ingrese el costo por km recorrido : " << endl;
			cin >> costo[j];
			while (costo[j] < 0) {
				cout << "no se permiten valores negativos, ingrese otro valor" << endl;
				cin >> costo[j];
			}
		}
		totalganado[i] = calculartotal(distancia, costo, numviajes);
		promedio[i] = promediodistancia(distancia, numviajes);

		if (totalganado[i] > mayoringreso) {
			mayoringreso = totalganado[i];
			mejorconductor = nombres[i];
		}
	}

	cout << "======================================= RESUME DE VENTAS ======================================" << endl;
	cout << "conductor			| total ganado ($)					| promedio distancia" << endl;
	cout << "===============================================================================================" << endl;
	for (int i = 0; i < cantidadcon; i++) {
		cout << nombres[i] << "					"	<< totalganado[i] << "$" << "					"  <<promedio[i] << "km" << endl;

	}
	cout << "===============================================================================================" << endl;
	cout << "el conductor con mas ganancias fue " << mejorconductor << "     con " << mayoringreso << "$";

	





	}