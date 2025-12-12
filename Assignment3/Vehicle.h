/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment4
*/

#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <ostream>

class Vehicle {
	public:
		Vehicle(const std::string& type, const std::string& color); //constructor
		~Vehicle(); //destructor

		//getters
		std::string GetType() const;
		std::string GetColor() const;

		//setters
		void SetType(const std::string& type);
		void SetColor(const std::string& color);

		//output
		friend std::ostream& operator<<(std::ostream& os, const Vehicle& vehicle);

	private:
		std::string type_;
		std::string color_;
};

#endif
