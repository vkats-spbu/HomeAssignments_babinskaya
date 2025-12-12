/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment4
*/

#include "Transformer.h"

//constructors
Transformer::Transformer():
		name_("Unknown"), strength_(0), speed_(0),ammo_(false),
		weapon_("laser", 100), vehicle_(new Vehicle("car", "red")) {}
Transformer::Transformer(const std::string& name):
		name_(name), strength_(0), speed_(0), ammo_(false),
		weapon_("laser", 100), vehicle_(new Vehicle ("car", "red")) {}
Transformer::Transformer(const std::string& name, int strength):
		name_(name), strength_(strength), speed_(0), ammo_(false),
		weapon_("laser", 100), vehicle_(new Vehicle("car", "red")) {}
Transformer::Transformer(const std::string& name, int strength, int speed):
                name_(name), strength_(strength), speed_(speed),
                ammo_(false), weapon_("laser", 100), vehicle_(new Vehicle("car", "red")) {}
Transformer::Transformer(const std::string& name, int strength, int speed, bool ammo):
		name_(name), strength_(strength), speed_(speed), ammo_(ammo),
		weapon_("laser", 100), vehicle_(new Vehicle("car", "red")) {}
Transformer::Transformer(const std::string& name, int strength, int speed, bool ammo,
		const Weapon& weapon, Vehicle* vehicle):
		name_(name), strength_(strength), speed_(speed), ammo_(ammo),
		weapon_(weapon), vehicle_(vehicle) {}

//destrudtor
Transformer::~Transformer() {
	delete vehicle_;
}

//output
std::ostream& operator<<(std::ostream& os, const Transformer& t) {
	os << "Transformer: "
	<< "name:" << t.name_
	<< ", strength:" << t.strength_
	<< ", speed:" << t.speed_
	<< ", ammo:" << t.ammo_
	<< ", weapon:" << t.weapon_
	<< ", vehicle:" << *t.vehicle_;
	return os;
}

//getters
std::string Transformer::GetName() const {
	return name_;
}

int Transformer::GetStrength() const {
	return strength_;
}

int Transformer::GetSpeed() const {
        return speed_;
}

bool Transformer::GetAmmo() const {
        return ammo_;
}

const Weapon& Transformer::GetWeapon() const {
	return weapon_;
}

const Vehicle* Transformer::GetVehicle() const {
	return vehicle_;
}

//setters
void Transformer::SetName(const std::string& name){
	name_ = name;
}

void Transformer::SetStrength(int strength){
        strength_ = strength;
}

void Transformer::SetSpeed(int speed){
        speed_ = speed;
}

void Transformer::SetAmmo(bool ammo){
        ammo_ = ammo;
}

void Transformer::SetWeapon(const Weapon& weapon) {
	weapon_ = weapon;
}

void Transformer::SetVehicle(Vehicle* vehicle) {
	vehicle_ = vehicle;
}

//class methods
std::string Transformer::Fire() {
	return "Transformer::Fire() from Transformer\n";
}

std::string Transformer::Speak() {
	return "Transfomer::Speak() from Transformer\n";
}
