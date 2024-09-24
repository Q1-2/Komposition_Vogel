#include "stdafx.h"
#include "Fluegel.h"
#include "Vogel.h"

int main()
{
	// Komposition
	// Die Objekte (hier: Fluegel) werden >> innerhalb der Klasse erzeugt << (im Konstruktor oder in einer Methode),
	// so dass sie auch zerstört werden, wenn die Lebensdauer des Objektes Vogel beendet ist.

	Vogel* v1 = new Vogel("Anton", "grau", 10);
	Vogel v2("Beate", "schwarz", 20);

	cout << v1->toString() << endl;
	cout << v2.toString() << endl;
	
	//Fluegel* tmp = v1->getDieFluegel().front();
	//cout << tmp->getGroesse() << endl;

	v1->~Vogel(); // Vogel Objekt wird nicht wirklich gelöscht. 
	//delete v1; // besser als v1->~Vogel(); da das Objekt Vogel wirklich gelöscht wird.
	
	//cout << tmp->getGroesse() << endl;

	// v2.~Vogel(); // Hier gibt es ein Problem. Der Compilier versucht das Objekt zwei mal zu löschen, da es nicht mit new erstellt wurde.
	
	//cout << v1->toString() << endl;
	// Fluegel* f = new Fluegel("blau", 80);

	//Fluegel* tmp1= new Fluegel(); Verhindern des Standardkonstruktoraufrufes mit private
	


    return 0;
}

