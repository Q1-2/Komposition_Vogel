#include "stdafx.h"
#include "Vogel.h"

Vogel::Vogel(string name, string farbe, int groesse)
{
	this->name = name;
	dieFluegel.push_front(new Fluegel(farbe, groesse)); // Merkmal der Komposition! Objekte werden innerhalb der Klasse erzeugt.
	this->hinzufuegenFluegel(farbe, groesse);
	// fluegel.push_front(f); // Aggregation
}

Vogel::~Vogel()
{
	// Merkmal der Komposition! Teil-Objekte werden innerhalb der Klasse zerstört, wenn das "Ganze-Objekt" zerstört wird.
	for (Fluegel* f : dieFluegel) {
		delete f; // Wichtig, da sonst nur der Listeneintrag gelöscht wird!
	}
	dieFluegel.clear(); // Eigentlich nicht notwendig, da sie mit dem Ojekt gelöscht werden. Es verhindert aber, dass jemand die Speicheradresse ausließt und anschließend die Inhalte des gelöschten Elementes ansehen kann.
}

string Vogel::getName()
{
	return name;
}

void Vogel::setName(string name)
{
	this->name = name;
}

// In diesem Beispiel macht die Methode keinen Sinn, da ein Vogel i.d.R. nur zwei Flügel haben kann.
// Ansosnten kann die Komposition aber auch über eine Methode erzeugt werden.
bool Vogel::hinzufuegenFluegel(string farbe, int groesse) 
{
	if (dieFluegel.size() < 2)
	{
		dieFluegel.push_front(new Fluegel(farbe, groesse)); // Merkmal der Komposition! Objekte werden innerhalb der Klasse erzeugt.
		return true;
	}
	return false;

}

list<Fluegel*>& Vogel::getDieFluegel()
{
	return dieFluegel;
}

string Vogel::toString()
{
	string text = name;
	for (Fluegel* f : dieFluegel) {
		text = text + " \nFarbe: " + f->getFarbe() + " Groesse: " + to_string(f->getGroesse());
	}

	return text;
}
