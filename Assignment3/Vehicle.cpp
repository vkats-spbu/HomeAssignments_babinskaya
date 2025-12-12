/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment4
*/

#include "Vehicle.h"

//constructor
Vehicle::Vehicle(const std::string& type, const std::string& color): type_(type), color_(color) {};

//destructor
Vehicle::~Vehicle() {};

//getters
std::string Vehicle::GetType() const {
	return type_;
}

std::string Vehicle::GetColor() const {
	return color_;
}

//setters
void Vehicle::SetType(const std::string& type) {
	type_ = type;
}

void Vehicle::SetColor(const std::string& color) {
        color_ = color;
}

std::ostream& operator<<(std::ostream& os, const Vehicle& vehicle) {
	 os << "Vehicle: " << "type: " << vehicle.type_ << ", color: " << vehicle.color_;
	return os;
}
