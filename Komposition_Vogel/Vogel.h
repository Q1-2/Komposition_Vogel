#pragma once
#include "Fluegel.h"

class Vogel
{
private:
	string name;
	list<Fluegel*> dieFluegel; 

public:
	Vogel(string name, string farbe, int groesse);
	~Vogel();

	string getName();
	void setName(string name);
	bool hinzufuegenFluegel(string farbe, int groesse);
	list<Fluegel*>& getDieFluegel();
	string toString();
};

