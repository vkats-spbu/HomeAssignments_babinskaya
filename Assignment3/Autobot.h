/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment4
*/

#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer {
	public:
		//constructors
		Autobot();
		Autobot(const std::string& name);
		Autobot(const std::string& name, int strength);
		Autobot(const std::string& name, int strength, int speed);
		Autobot(const std::string& name, int strength, int speed, bool ammo);
		Autobot(const std::string& name, int strength, int speed, bool ammo,
		const Weapon& weapon, Vehicle* vehicle);
		Autobot(const std::string& name, int strength, int speed, bool ammo,
		const Weapon& weapon, Vehicle* vehicle, const std::string& leader);
		Autobot(const std::string& name, int strength, int speed, bool ammo,
		const Weapon& weapon, Vehicle* vehicle, const std::string& leader, int rescues);

		friend std::ostream& operator<<(std::ostream& os, const Autobot& a);

		//getters
		std::string GetLeader() const;
		int GetRescues() const;

		//setters
		void SetLeader(const std::string& leader);
		void SetRescues(int rescues);

		//class method
		std::string ProtectHumans();
		std::string Transform() override;
		std::string Speak() override;
		std::string Fire() override;

	private:
		std::string leader_;
		int rescues_;
};

#endif
