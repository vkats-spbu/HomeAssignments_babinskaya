/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment4
*/

#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <ostream>

class Weapon {
	public:
		Weapon(const std::string& name, int power); //constructor
		~Weapon(); //destructor

		//getters
		std::string GetName() const;
		int GetPower() const;

		//setters
		void SetName(const std::string& name);
		void SetPower(int power);

		//output
		friend std::ostream& operator<<(std::ostream& os, const Weapon& weapon);

	private:
		std::string name_;
		int power_;
};
#endif
