#include <vector>
#include <list>
#include <iostream>
#include <stdio.h>
#include <time.h>


using namespace std;
class persona {
public:
	int idPersona;
	string nombres;
	string fechaNacimiento;
	int peso;

	persona(int _idPersona, string _nombres, string _fechaNacimiento, int _peso) {
		idPersona = _idPersona;
		nombres = _nombres;
		fechaNacimiento = _fechaNacimiento;
		peso = _peso;
	}
};

int main() {
	//Laboratorio 05

	//Tiempos tomados para llenar un Vector con 100000 elementos
	//1.	8.515
	//2.	8.919
	//3.	8.844
	//4.	8.806
	//5.	8.873
	//
	//Tiempos tomados para llenar una Lista con 100000 elementos
	//1.	8.078
	//2.	7.732
	//3.	7.862
	//4.	7.857
	//5.	7.632

	// De acuerdo a los datos tomados, una lista se llena ligeramente m�s r�pido con elementos comparado con un vector
	// lastimosamente no pude hacer funcionar los c�digos de mostrar los elementos de una lista o vector, supongo que
	// una manera de hacerlo es con Punteros pero no tengo conocimientos b�sicos de lo que son los punteros y es lo
	// siguiente que aprender� gracias a esto! :D
	double sum = 0;
	double add = 1;

	// Start measuring time
	clock_t start = clock();

	int iterations = 1000 * 1000 * 1000;
	for (int i = 0; i < iterations; i++) {
		sum += add;
		add /= 2.0;
	}
	//---------------------------------------------------------------------------------------------------------------

	vector<persona> miVector;
	list<persona> miLista;


	//for (int i = 1; i <= 100000; i++) {
	//miVector.push_back(persona(rand() % (100 - 1 + 1) + 1, "NO PUEDO!!!!", "GENERAR CADENAS ALEATORIAS!!!", rand() % (100 - 1 + 1) + 1));
	//}

	for (int i = 1; i <= 100000; i++) {
	miLista.push_back(persona(rand() % (100 - 1 + 1) + 1, "NO PUEDO!!!!", "GENERAR CADENAS ALEATORIAS!!!", rand() % (100 - 1 + 1) + 1));
	}


	//---------------------------------------------------------------------------------------------------------------


	// Stop measuring time and calculate the elapsed time
	clock_t end = clock();
	double elapsed = double(end - start) / CLOCKS_PER_SEC;

	printf("Time measured: %.3f seconds.\n", elapsed);

	return 0;


	//persona* p = new persona();

	//vector<persona*> miVector;
	//list<persona*> miLista;


	//miVector.push_back(persona(01, "Pedro Guzman", "15 de Enero de 1989", 70));
	//miVector.push_back(persona(02, "Juan Perez", "14 de Septiembre de 1969", 69));
	//miVector.push_back(persona(03, "Bomberman", "18 de Julio de 2000", 49));
	//miVector.push_back(persona(04, "Pacman", "29 de Diciembre de 1989", 55));
	//miVector.push_back(persona(05, "Otro nombre", "Otra fecha de nac", 58));
	//miVector.push_back(persona(06, "otro nombre06", "otra fecha de nac06", 69));
	//miVector.push_back(persona(07, "otro nombre07", "otra fecha de nac07", 50));
	//miVector.push_back(persona(8, "otro nombre08", "otra fecha de nac08", 64));
	//miVector.push_back(persona(9, "otro nombre09", "otra fecha de nac09", 69));
	//miVector.push_back(persona(10, "otro nombre10", "otra fecha de nac10", 65));
	//miVector.push_back(persona(11, "otro nombre11", "otra fecha de nac11", 62));
	//miVector.push_back(persona(12, "otro nombre12", "otra fecha de nac12", 61));
	//miVector.push_back(persona(13, "otro nombre13", "otra fecha de nac13", 59));
	//miVector.push_back(persona(14, "otro nombre14", "otra fecha de nac14", 54));
	//miVector.push_back(persona(15, "otro nombre15", "otra fecha de nac15", 53));
	//miVector.push_back(persona(16, "otro nombre16", "otra fecha de nac16", 62));
	//miVector.push_back(persona(17, "otro nombre17", "otra fecha de nac17", 61));
	//miVector.push_back(persona(18, "otro nombre18", "otra fecha de nac18", 58));
	//miVector.push_back(persona(19, "otro nombre19", "otra fecha de nac19", 51));
	//miVector.push_back(persona(20, "otro nombre20", "otra fecha de nac20", 52));
	//miVector.push_back(persona(21, "otro nombre21", "otra fecha de nac21", 57));



	//miLista.push_back(persona(1, "Gary Diaz", "14 de Noviembre de 1989", 67));
	//miLista.push_back(persona(2, "Jessenia Barrios", "12 de Enero de 1998", 55));
	//miLista.push_back(persona(3, "mi_docente", "1 de enero de 1990", 62));
	//miLista.push_back(persona(4, "m�s nombres4", "m�s fechas4", 123));
	//miLista.push_back(persona(5, "m�s nombres5", "m�s fechas5", 85));
	//miLista.push_back(persona(6, "m�s nombres6", "m�s fechas6", 72));
	//miLista.push_back(persona(7, "m�s nombres7", "m�s fechas7", 80));
	//miLista.push_back(persona(8, "m�s nombres8", "m�s fechas8", 59));
	//miLista.push_back(persona(9, "m�s nombres9", "m�s fechas9", 51));
	//miLista.push_back(persona(10, "m�s nombres10", "m�s fechas10", 58));
	//miLista.push_back(persona(11, "m�s nombres11", "m�s fechas11", 62));
	//miLista.push_back(persona(12, "m�s nombres12", "m�s fechas12", 79));
	//miLista.push_back(persona(13, "m�s nombres13", "m�s fechas13", 75));
	//miLista.push_back(persona(14, "m�s nombres14", "m�s fechas14", 73));
	//miLista.push_back(persona(15, "m�s nombres15", "m�s fechas15", 57));
	//miLista.push_back(persona(16, "m�s nombres16", "m�s fechas16", 81));
	//miLista.push_back(persona(17, "m�s nombres17", "m�s fechas17", 69));
	//miLista.push_back(persona(18, "m�s nombres18", "m�s fechas18", 100));
	//miLista.push_back(persona(19, "m�s nombres19", "m�s fechas19", 81));
	//miLista.push_back(persona(20, "m�s nombres20", "m�s fechas20", 51));
	//miLista.push_back(persona(21, "m�s nombres21", "m�s fechas21", 60));



}