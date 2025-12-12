/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment4
*/

#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"

class Decepticon : public Transformer {
	public:
		//constructors
		Decepticon();
		Decepticon(const std::string& name);
		Decepticon(const std::string& name, int strength);
		Decepticon(const std::string& name, int strength, int speed);
		Decepticon(const std::string& name, int strength, int speed, bool ammo);
		Decepticon(const std::string& name, int strength, int speed, bool ammo, const Weapon& weapon,
                Vehicle* vehicle);
		Decepticon(const std::string& name, int strength, int speed, bool ammo, const Weapon& weapon,
                Vehicle* vehicle, bool dangerous);
		Decepticon(const std::string& name, int strength, int speed, bool ammo, const Weapon& weapon,
		Vehicle* vehicle, bool dangerous, int kills);

		friend std::ostream& operator<<(std::ostream& os, const Decepticon& d);

		//getters
		bool GetDangerous() const;
		int GetKills() const;

		//setters
		void SetDangerous(bool dangerous);
		void SetKills(int kills);

		//class method
		std::string Destroy();
		std::string Transform() override;
		std::string Speak() override;
		std::string Fire() override;

	private:
		bool dangerous_;
		int kills_;

};

#endif
