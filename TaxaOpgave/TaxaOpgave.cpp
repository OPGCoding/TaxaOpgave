#include <iostream>

using namespace std;

int main()
{
label:
	// Variabler
	int Opkast = 1500;
	int KmPris = 2;
	int StartPris = 75;
	float TotalPris;
	float Rabat;

	// Definerer antal km
	int AntalKm;
	cout << "Indtast antal km. (1 = 1km): ";
	cin >> AntalKm;

	if (AntalKm <= 100)
	{
		// Definerer Rabat procent
		Rabat = 1.0;
		
		// Totalpris udregnes under 100 km og unden rabat
		TotalPris = ((AntalKm * KmPris) * Rabat) + StartPris;

		// Output totalpris
		cout << "Din totalpris er: " << TotalPris << ",-\n";
	}
	else if (AntalKm > 100 && AntalKm <= 150) 
	{
		// Definerer Rabat procent
		Rabat = 0.9;

		// Totalpris udregnes over 100 km og 10% rabat
		TotalPris = ((AntalKm * KmPris)* Rabat) + StartPris;

		// Output totalpris
		cout << "Din totalpris er: " << TotalPris << ",-\n";
	}
	else if (AntalKm > 150 && AntalKm <= 200)
	{
		// Definerer Rabat procent
		Rabat = 0.8;

		// Totalpris udregnes over 100 km og 20% rabat
		TotalPris = ((AntalKm * KmPris) * Rabat) + StartPris;

		// Output totalpris
		cout << "Din totalpris er: " << TotalPris << ",-\n";
	}
	else if (AntalKm > 200)
	{
		// Definerer Rabat procent
		Rabat = 0.7;

		// Totalpris udregnes over 100 km og 30% rabat
		TotalPris = ((AntalKm * KmPris) * Rabat) + StartPris;

		// Output totalpris
		cout << "Din totalpris er: " << TotalPris << ",-\n";
	}
	else 
	{
		cout << "Der skete en fejl";
	}


	goto label;
}
