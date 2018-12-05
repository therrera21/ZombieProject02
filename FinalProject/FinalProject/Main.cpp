#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include "Alarmed.h"
#include "Ignorant.h"
#include "Person.h"
#include "Zombie.h"
#include "Map.h"
using namespace std;

// adds the resident names to persons via File Input
void addNames() {

	ifstream myFile;
	string line;
	myFile.open("PersonList.txt", ios::in);
	for (int i = 0; i < 2000; i++) {
		while (getline(myFile, line)) {
			listNames.push_back(line);
		}
	}
}

// creates all persons as ignorant
void createIgnorants() {

	for (int i = 0; i < listNames.size(); i++) {
		Person *newPerson = new Ignorant[2000];

		string temp_Name = newPerson->getName();
		string temp_homeLoc = newPerson->getHomeLoc();
		string temp_workLoc = newPerson->getWorkLoc();

		if (temp_homeLoc == "Soho")
			Soho.push_back(*newPerson);
		else if (temp_homeLoc == "Docks")
			Docks.push_back(*newPerson);
		else if (temp_homeLoc == "University")
			University.push_back(*newPerson);
		else if (temp_homeLoc == "Uptown")
			Uptown.push_back(*newPerson);
		else if (temp_homeLoc == "Downtown")
			Downtown.push_back(*newPerson);
		else
			MedicalHill.push_back(*newPerson);
	}
}

// MAIN FUNCTION
int main()
{
	addNames();
	createIgnorants();
	cout << Soho.at(1).getHomeLoc() << endl;

	districtLayout.push_back(Uptown);
	districtLayout.push_back(Soho);
	districtLayout.push_back(University);
	districtLayout.push_back(Downtown);
	districtLayout.push_back(MedicalHill);
	districtLayout.push_back(Docks);


	return 0;
}