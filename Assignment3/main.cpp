/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment4
*/

#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Minicon.h"
#include <iostream>
#include <vector>

int main() {
	Weapon weapon("blaster", 100);
	Vehicle vehicle("car", "red");

	Autobot a("Optimus Prime", 1000, 200, true, weapon, &vehicle, "leader", 100);
	Decepticon d("Megatron", 900, 200, true, weapon, &vehicle, true, 90);
	Minicon m("Fixit", 100, 50, false, weapon, &vehicle, 40, 20);

	std::vector<Transformer*> transformers = {&a, &d, &m};

	for (Transformer* t : transformers) {
		std::cout << *t;
		t->Transform();
		t->Speak();
		t->Fire();
		std::cout << "\n";
	}
	return 0;
}
