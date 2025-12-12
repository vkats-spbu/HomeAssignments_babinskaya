/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment4
*/

#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include "Weapon.h"
#include "Vehicle.h"
#include <iostream>


class Transformer {

	friend class Autobot;
	friend class Decepticon;
	friend class Minicon;

        public:
		//constructors
		Transformer();
		Transformer(const std::string& name);
		Transformer(const std::string& name, int strength);
		Transformer(const std::string& name, int strength, int speed);
		Transformer(const std::string& name, int strength, int speed, bool ammo);
                Transformer(const std::string& name, int strength, int speed, bool ammo,
		const Weapon& weapon, Vehicle* vehicle);
		//destructor
                virtual ~Transformer();

		friend std::ostream& operator<<(std::ostream& os, const Transformer& t); //output

               //getters
                std::string GetName() const;
		int GetStrength() const;
		int GetSpeed() const;
		bool GetAmmo() const;
		const Weapon& GetWeapon() const;
		const Vehicle* GetVehicle() const;

		//setters
		void SetName(const std::string& name);
		void SetStrength(int strength);
		void SetSpeed(int speed);
		void SetAmmo(bool ammo);
		void SetWeapon(const Weapon& weapon);
		void SetVehicle(Vehicle* vehicle);

		//class methods
		virtual std::string Transform() = 0; //puerly virtual method
		virtual std::string Fire();
		virtual std::string Speak();

        private:
                std::string name_;
                int strength_;
                int speed_;
                bool ammo_;

                Weapon weapon_; //composition
                Vehicle* vehicle_; //association

};
#endif
