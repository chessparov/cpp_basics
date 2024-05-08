#include <iostream>
using namespace std;

double AddOne(double num);

int main()
{
	unsigned i;
	double temperature[8];
	double media = 0.0;

	// Acquisizione dei dati
	for (i = 0; i < 8; i++) {
		cout << "Temperature " << i + 1 << " : ";
		cin >> temperature[i];
	}

	// Calcolo dela media
	for (i = 0; i < 8; i++)
		media += temperature[i];
	media /= 8;

	// Visualizzazione dei risultati
	cout.precision(3);
	cout << "Temperatura media settimanale: " << media << endl;
	cout << "Media aumentata di 1: " << AddOne(media) << endl;

}

double AddOne(double num) 
{
	return num + 1;
}

