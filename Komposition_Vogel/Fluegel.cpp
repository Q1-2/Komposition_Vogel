#include "stdafx.h"
#include "Fluegel.h"

Fluegel::Fluegel(string farbe, int groesse)
{
	setFarbe(farbe);
	setGroesse(groesse);
}

Fluegel::~Fluegel()
{
}

int Fluegel::getGroesse()
{
	return groesse;
}

string Fluegel::getFarbe()
{
	return farbe;
}

void Fluegel::setGroesse(int groesse)
{
	this->groesse = groesse;
}

void Fluegel::setFarbe(string farbe)
{
	this->farbe = farbe;
}

