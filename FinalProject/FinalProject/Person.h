#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include <ctime>
#include <cmath>

class Person
{
private:
	std::string name;
	int homeLoc;
	int workLoc;
	int currentLoc;

	friend class Ignorant;
	friend class Zombie;
	friend class Alarmed;

public:
	Person()
	{
		name = "John";
		homeLoc = rand() % 6 + 1;
		workLoc = rand() % 6 + 1;
		currentLoc = homeLoc;
	}
	Person(std::string n, int h, int w)
	{
		name = n;
		homeLoc = h;
		workLoc = w;
		currentLoc = h;
	}

	std::string getName() {
		return name;
	}
	std::string getWorkLoc() {
		if (workLoc == 1)
			return "Docks";
		else if (workLoc == 2)
			return "Medical Hill";
		else if (workLoc == 3)
			return "Downtown";
		else if (workLoc == 4)
			return "University";
		else if (workLoc == 5)
			return "Soho";
		else
			return "Uptown";
	}
	std::string getHomeLoc() {
		if (homeLoc == 1)
			return "Docks";
		else if (homeLoc == 2)
			return "Medical Hill";
		else if (homeLoc == 3)
			return "Downtown";
		else if (homeLoc == 4)
			return "University";
		else if (homeLoc == 5)
			return "Soho";
		else
			return "Uptown";
	}
	void setName(std::string n) {
		name = n;
	}

	//virtual void move() = 0;

};
#endif
