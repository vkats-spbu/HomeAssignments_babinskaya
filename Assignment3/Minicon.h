/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment4
*/

#ifndef MINICON_H
#define MINICON_H

#include "Transformer.h"

class Minicon : public Transformer{
	public:
		//constructors
		Minicon();
		Minicon(const std::string& name);
		Minicon(const std::string& name, int strength);
		Minicon(const std::string& name, int strength, int speed);
		Minicon(const std::string& name, int strength, int speed, bool ammo);
		Minicon(const std::string& name, int strength, int speed, bool ammo,
                const Weapon& weapon, Vehicle* vehicle);
		Minicon(const std::string& name, int strength, int speed, bool ammo,
                const Weapon& weapon, Vehicle* vehicle, int size);
		Minicon(const std::string& name, int strength, int speed, bool ammo,
                const Weapon& weapon, Vehicle* vehicle, int size, int agility);

		friend std::ostream& operator<<(std::ostream& os, const Minicon& m); //output

		//getter
		int GetSize() const;
		int GetAgility() const;

		//setter
		void SetSize(int size);
		void SetAgility(int agility);

		//class method
		std::string HelpAutobot();
		std::string Transform() override;
		std::string Speak() override;
		std::string Fire() override;

	private:
		int size_;
		int agility_;
};

#endif
