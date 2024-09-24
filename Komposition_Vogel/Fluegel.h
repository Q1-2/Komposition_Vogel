#pragma once
class Fluegel
{
private:
	int groesse;
	string farbe;
	//Fluegel() {};	// Eine Standardkonstruktor darf es hier nicht geben! Diesen "Privat" zumachen, ist eine Methode ihn zu verbieten.
	
public:
	Fluegel() = delete;
	Fluegel(string farbe, int groesse);
	~Fluegel();

	int getGroesse();
	string getFarbe();
	void setGroesse(int groesse);
	void setFarbe(string farbe);
};

