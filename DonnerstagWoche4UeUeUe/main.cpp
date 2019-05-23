
#include <iostream>

using namespace std;



// Funktion, um die Summe von 2 Zahlen zu berechnen
int addiereZahlen(int zahl1, int zahl2)
{
	int ergbnis = zahl1 + zahl2;
	return ergbnis;
}


// Überladene Funktion -- 1. Anzahl der Parameter
int addiereZahlen(int zahl1, int zahl2, int zahl3)
{
	int ergebnis = zahl1 + zahl2 + zahl3;
	return ergebnis;
}


// Überladene Funktion -- 2. Unterscheidunug bei der Art des Datentyps
double addiereZahlen(double zahl1 , double zahl2)
{
	double ergebnis = zahl1 + zahl2;
	return ergebnis;
}



// Überladene Funktion -- 3. Unterscheidunug bei der Art des Datentyps
double addiereZahlen(int zahl1, double zahl2)
{
	double ergebnis = zahl1 + zahl2;
	return ergebnis;
}


// Überladene Funktion -- 4. Durch Reihenfolge der Datentypen
double addiereZahlen(double zahl1, int zahl2)
{
	double ergebnis = zahl1 + zahl2;
	return ergebnis;
}


//// Das geht so nicht, da sich diese Funktion nur durch den Rückgabetypen unterscheidet
//int addiereZahlen(double zahl1, int zahl2)
//{
//	int ergebnis = zahl1 + zahl2;
//	int ergebnis;
//}



int main()
{
	cout << "Programm zu Donnerstag" << endl;
	cout << "Uebergeben, Ueberladen, Ueberschreiben" << endl << endl;


	cout << "Summe von 2 und 3:     " << addiereZahlen(2, 3) << endl;
	cout << "Summe von 1, 2 und 3:  " << addiereZahlen(1,2,3) << endl;
	cout << "Summe von 3.3 und 4.4: " << addiereZahlen(3.3, 4.4) << endl;
	cout << "Summe von 2 und 4.6:   " << addiereZahlen(2, 4.6) << endl;
	cout << "Summe von 4.6 und 2:   " << addiereZahlen(4.6, 2) << endl;


	system("pause");
	return 0;
}
