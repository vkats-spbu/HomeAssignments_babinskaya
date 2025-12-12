/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignmnent4
*/

#include <gtest/gtest.h>
#include "Minicon.h"
#include "Weapon.h"
#include "Vehicle.h"

//getters tests
TEST(MiniconTest, GetSizeTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Minicon m("Fixit", 1000, 200, true, weapon, &vehicle, 60, 100);
        EXPECT_EQ(m.GetSize(), 60);
}

TEST(MiniconTest, GetAgilityTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Minicon m("Fixit", 1000, 200, true, weapon, &vehicle, 60, 100);
        EXPECT_EQ(m.GetAgility(), 100);
}


//setters tests
TEST(MiniconTest, SetSizeTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Minicon m("Fixit", 1000, 200, true, weapon, &vehicle, 60, 100);
        m.SetSize(70);
        EXPECT_EQ(m.GetSize(), 70);
}

TEST(MiniconTest, SetAgilityTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Minicon m("Fixit", 1000, 200, true, weapon, &vehicle, 60, 100);
        m.SetAgility(120);
        EXPECT_EQ(m.GetAgility(), 120);
}

//class methods tests
TEST(MiniconTest, MethodTransforTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Minicon m("Fixit", 1000, 200, true, weapon, &vehicle, 60, 100);
        EXPECT_EQ(m.Transform(), "Minicon::Transform() from Minicon");
}

TEST(MiniconTest, MethodSpeakTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Minicon m("Fixit", 1000, 200, true, weapon, &vehicle, 60, 100);
        EXPECT_EQ(m.Speak(), "Minicon::Speak() from Minicon");
}

TEST(MiniconTest, MethodFireTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Minicon m("Fixit", 1000, 200, true, weapon, &vehicle, 60, 100);
        EXPECT_EQ(m.Fire(), "Minicon::Fire() from Minicon");
}

TEST(MiniconTest, Helping) {
	Weapon weapon("laser", 150);
	Vehicle vehicle("jet", "red");
	Minicon m("Fixit", 1000, 200, true, weapon, &vehicle, 60, 100);
	EXPECT_EQ(m.HelpAutobot(), "help has been provided");
}

//constructor tests

TEST(MiniconConstructorTest, ConstructorTestEmpty) {
        Minicon m;
        EXPECT_EQ(m.GetName(), "Unknown");
	EXPECT_EQ(m.GetStrength(), 0);
	EXPECT_EQ(m.GetSpeed(), 0);
	EXPECT_FALSE(m.GetAmmo());
	EXPECT_EQ(m.GetWeapon().GetName(), "laser");
	EXPECT_EQ(m.GetVehicle()->GetType(), "car");
	EXPECT_EQ(m.GetWeapon().GetPower(), 100);
	EXPECT_EQ(m.GetVehicle()->GetColor(), "red");
	EXPECT_EQ(m.GetSize(), 50);
	EXPECT_EQ(m.GetAgility(), 30);
}

TEST(MiniconConstructorTest, ConstructorTestWithoutOneParameter) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Minicon m("Fixit", 1000, 200, true, weapon, &vehicle, 60);
        EXPECT_EQ(m.GetName(), "Fixit");
        EXPECT_EQ(m.GetStrength(), 1000);
        EXPECT_EQ(m.GetSpeed(), 200);
        EXPECT_TRUE(m.GetAmmo());
        EXPECT_EQ(m.GetWeapon().GetName(), "laser");
        EXPECT_EQ(m.GetVehicle()->GetType(), "jet");
        EXPECT_EQ(m.GetWeapon().GetPower(), 150);
        EXPECT_EQ(m.GetVehicle()->GetColor(), "red");
        EXPECT_EQ(m.GetSize(), 60);
        EXPECT_EQ(m.GetAgility(), 30);
}

TEST(MiniconConstructorTest, ConstructorTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Minicon m("Fixit", 1000, 200, true, weapon, &vehicle, 60, 100);
        EXPECT_EQ(m.GetName(), "Fixit");
        EXPECT_EQ(m.GetStrength(), 1000);
        EXPECT_EQ(m.GetSpeed(), 200);
        EXPECT_TRUE(m.GetAmmo());
        EXPECT_EQ(m.GetWeapon().GetName(), "laser");
        EXPECT_EQ(m.GetVehicle()->GetType(), "jet");
        EXPECT_EQ(m.GetWeapon().GetPower(), 150);
        EXPECT_EQ(m.GetVehicle()->GetColor(), "red");
        EXPECT_EQ(m.GetSize(), 60);
        EXPECT_EQ(m.GetAgility(), 100);
}
