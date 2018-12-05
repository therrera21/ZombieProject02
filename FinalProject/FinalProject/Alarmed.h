#ifndef ALARMED_H
#define ALARMED_H

#include <iostream>
#include <string>
#include "Person.h"

class Alarmed : public Person
{
public:
	Alarmed() : Person() {}
	void move()
	{
		srand(time(NULL));
		int randomLoc = rand() % 6 + 1;
		while (randomLoc == this->homeLoc)
			this->currentLoc = randomLoc;
		if (randomLoc == this->homeLoc && randomLoc > 2)
		{
			randomLoc--;
			this->currentLoc = randomLoc;
		}
		else if (randomLoc == this->homeLoc && randomLoc < 2)
		{
			randomLoc++;
			this->currentLoc = randomLoc;
		}


	}
	void interact();
};
#endif