/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignmnent4
*/

#include "Weapon.h"

//constructor
Weapon::Weapon(const std::string& name, int power): name_(name), power_(power) {}

//destructor
Weapon::~Weapon() {}

//getters
std::string Weapon::GetName() const {
	return name_;
}

int Weapon::GetPower() const {
	return power_;
}

//setters
void Weapon::SetName(const std::string& name) {
	name_ = name;
}

void Weapon::SetPower(int power) {
	power_ = power;
}

//output
std::ostream& operator<<(std::ostream& os, const Weapon& weapon) {
	os << "Weapon: " << "name: " << weapon.name_ << ", power: " << weapon.power_ ;
	return os;
}
