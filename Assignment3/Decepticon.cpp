/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment4
*/

#include "Decepticon.h"
#include <iostream>

//constructors
Decepticon::Decepticon():
	Transformer(), dangerous_(false), kills_(0) {}
Decepticon::Decepticon(const std::string& name):
	Transformer(name), dangerous_(false), kills_(0) {}
Decepticon::Decepticon(const std::string& name, int strength):
	Transformer(name, strength), dangerous_(false), kills_(0) {}
Decepticon::Decepticon(const std::string& name, int strength, int speed):
	Transformer(name, strength, speed), dangerous_(false), kills_(0) {}
Decepticon::Decepticon(const std::string& name, int strength, int speed, bool ammo):
	Transformer(name, strength, speed, ammo), dangerous_(false), kills_(0) {}
Decepticon::Decepticon(const std::string& name, int strength, int speed, bool ammo, const Weapon& weapon,
		Vehicle* vehicle):
	Transformer(name, strength, speed, ammo, weapon, vehicle), dangerous_(false), kills_(0) {}
Decepticon::Decepticon(const std::string& name, int strength, int speed, bool ammo, const Weapon& weapon,
		Vehicle* vehicle, bool dangerous):
	Transformer(name, strength, speed, ammo, weapon, vehicle), dangerous_(dangerous), kills_(0) {}
Decepticon::Decepticon(const std::string& name, int strength, int speed, bool ammo, const Weapon& weapon,
		Vehicle* vehicle, bool dangerous, int kills):
	Transformer(name, strength, speed, ammo, weapon, vehicle), dangerous_(dangerous), kills_(kills) {}

//output
std::ostream& operator<<(std::ostream& os, const Decepticon& d) {
        os << "Decepticon: "
        << "name:" << d.GetName()
        << ", strength:" << d.GetStrength()
        << ", speed:" << d.GetSpeed()
        << ", ammo:" << d.GetAmmo()
        << ", weapon:" << d.GetWeapon()
        << ", vehicle:" << *d.GetVehicle()
        << ", dangerous:" << d.GetDangerous()
        << ", kills:" << d.GetKills();
        return os;
}

//getters
bool Decepticon::GetDangerous() const {
	return dangerous_;
}

int Decepticon::GetKills() const {
	return kills_;
}

//setters
void Decepticon::SetDangerous(bool dangerous) {
	dangerous_ = dangerous;
}

void Decepticon::SetKills(int kills) {
	kills_ = kills;
}

//class method
std::string Decepticon::Destroy() {
	return "everything destroyed";
}

std::string Decepticon::Transform() {
	return "Decepticon::Transform() from Decepticon";
}

std::string Decepticon::Speak() {
	return "Decepticon::Speak() from Decepticon";
}

std::string Decepticon::Fire() {
	return "Decepticon::Fire() from Decepticon";
}
