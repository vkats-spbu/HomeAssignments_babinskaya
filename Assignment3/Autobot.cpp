/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment4
*/

#include "Autobot.h"
#include <iostream>

//constructor
Autobot::Autobot():
	Transformer(), leader_("not leader"), rescues_(0) {}
Autobot::Autobot(const std::string& name):
        Transformer(name), leader_("not leader"), rescues_(0) {}
Autobot::Autobot(const std::string& name, int strength):
        Transformer(name, strength), leader_("not leader"), rescues_(0) {}
Autobot::Autobot(const std::string& name, int strength, int speed):
	Transformer(name, strength, speed), leader_("not leader"), rescues_(0) {}
Autobot::Autobot(const std::string& name, int strength, int speed, bool ammo):
	Transformer(name, strength, speed, ammo), leader_("not leader"), rescues_(0) {}
Autobot::Autobot(const std::string& name, int strength, int speed, bool ammo, const Weapon& weapon,
		Vehicle* vehicle):
	Transformer(name, strength, speed, ammo, weapon, vehicle), leader_("not leader"), rescues_(0) {}
Autobot::Autobot(const std::string& name, int strength, int speed, bool ammo, const Weapon& weapon,
		Vehicle* vehicle, const std::string& leader):
	Transformer(name, strength, speed, ammo, weapon, vehicle), leader_(leader), rescues_(0) {}
Autobot::Autobot(const std::string& name, int strength, int speed, bool ammo, const Weapon& weapon,
		Vehicle* vehicle, const std::string& leader, int rescues):
	Transformer(name, strength, speed, ammo, weapon, vehicle), leader_(leader), rescues_(rescues) {}

//output
std::ostream& operator<<(std::ostream& os, const Autobot& a) {
	os << "Autobot: "
        << "name:" << a.GetName()
        << ", strength:" << a.GetStrength()
        << ", speed:" << a.GetSpeed()
        << ", ammo:" << a.GetAmmo()
        << ", weapon:" << a.GetWeapon()
        << ", vehicle:" << *a.GetVehicle()
        << ", leader:" << a.GetLeader()
        << ", rescues:" << a.GetRescues();
        return os;
}

//getters
std::string Autobot::GetLeader() const {
	return leader_;
}

int Autobot::GetRescues() const {
	return rescues_;
}

//setters
void Autobot::SetLeader(const std::string& leader) {
	leader_ = leader;
}

void Autobot::SetRescues(int rescues) {
	rescues_ = rescues;
}

//class method
std::string Autobot::ProtectHumans() {
	return "humans protected";
}

std::string Autobot::Transform() {
	return "Autobot::Transform() from Autobot\n";
}

std::string Autobot::Speak() {
	return "Autobot::Speak() from Autobot\n";
}

std::string Autobot::Fire() {
	return "Autobot::Fire() from Autobot\n";
}
