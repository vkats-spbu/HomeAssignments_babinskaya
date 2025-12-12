/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignmnent4
*/

#include <gtest/gtest.h>
#include "Autobot.h"
#include "Weapon.h"
#include "Vehicle.h"


//getters tests
TEST(AutobotTest, GetLeaderTest) {
	Weapon weapon("laser", 150);
	Vehicle vehicle("jet", "red");
	Autobot a("Optimus Prime", 1000, 200, true, weapon, &vehicle, "leader", 100);
	EXPECT_EQ(a.GetLeader(), "leader");
}

TEST(AutobotTest, GetRescuesTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Autobot a("Optimus Prime", 1000, 200, true, weapon, &vehicle, "leader", 100);
        EXPECT_EQ(a.GetRescues(), 100);
}


//setters tests
TEST(AutobotTest, SetLeaderTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Autobot a("Optimus Prime", 1000, 200, true, weapon, &vehicle, "leader", 100);
	a.SetLeader("not leader");
        EXPECT_EQ(a.GetLeader(), "not leader");
}

TEST(AutobotTest, SetRescuesTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Autobot a("Optimus Prime", 1000, 200, true, weapon, &vehicle, "leader", 100);
	a.SetRescues(200);
        EXPECT_EQ(a.GetRescues(), 200);
}

//class methods tests
TEST(AutobotTest, MethodTransforTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Autobot a("Optimus Prime", 1000, 200, true, weapon, &vehicle, "leader", 100);
        EXPECT_EQ(a.Transform(), "Autobot::Transform() from Autobot");
}

TEST(AutobotTest, MethodSpeakTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Autobot a("Optimus Prime", 1000, 200, true, weapon, &vehicle, "leader", 100);
        EXPECT_EQ(a.Speak(), "Autobot::Speak() from Autobot");
}

TEST(AutobotTest, MethodFireTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Autobot a("Optimus Prime", 1000, 200, true, weapon, &vehicle, "leader", 100);
        EXPECT_EQ(a.Fire(), "Autobot::Fire() from Autobot");
}

TEST(AutobotTest, HumanProtection) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Autobot a("Optimus Prime", 1000, 200, true, weapon, &vehicle, "leader", 100);
	EXPECT_EQ(a.ProtectHumans(), "humans protected");
}


//constructor tests
TEST(AutobotConstructorTest, ConstructorTestEmpty) {
        Autobot a;
        EXPECT_EQ(a.GetName(), "Unknown");
	EXPECT_EQ(a.GetStrength(), 0);
	EXPECT_EQ(a.GetSpeed(), 0);
	EXPECT_FALSE(a.GetAmmo());
	EXPECT_EQ(a.GetWeapon().GetName(), "laser");
	EXPECT_EQ(a.GetVehicle()->GetType(), "car");
	EXPECT_EQ(a.GetWeapon().GetPower(), 100);
	EXPECT_EQ(a.GetVehicle()->GetColor(), "red");
	EXPECT_EQ(a.GetLeader(), "not leader");
	EXPECT_EQ(a.GetRescues(), 0);
}

TEST(AutobotConstructorTest, ConstructorTestWithoutOneParameter) {
        Weapon weapon("laser", 150);
	Vehicle vehicle("jet", "red");
        Autobot a("Optimus Prime", 1000, 200, true, weapon, &vehicle, "leader");
        EXPECT_EQ(a.GetName(), "Optimus Prime");
        EXPECT_EQ(a.GetStrength(), 1000);
        EXPECT_EQ(a.GetSpeed(), 200);
        EXPECT_TRUE(a.GetAmmo());
        EXPECT_EQ(a.GetWeapon().GetName(), "laser");
        EXPECT_EQ(a.GetVehicle()->GetType(), "jet");
        EXPECT_EQ(a.GetWeapon().GetPower(), 150);
        EXPECT_EQ(a.GetVehicle()->GetColor(), "red");
        EXPECT_EQ(a.GetLeader(), "leader");
        EXPECT_EQ(a.GetRescues(), 0);
}

TEST(AutobotConstructorTest, ConstructorTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Autobot a("Optimus Prime", 1000, 200, true, weapon, &vehicle, "leader", 100);
        EXPECT_EQ(a.GetName(), "Optimus Prime");
        EXPECT_EQ(a.GetStrength(), 1000);
        EXPECT_EQ(a.GetSpeed(), 200);
        EXPECT_TRUE(a.GetAmmo());
        EXPECT_EQ(a.GetWeapon().GetName(), "laser");
        EXPECT_EQ(a.GetVehicle()->GetType(), "jet");
        EXPECT_EQ(a.GetWeapon().GetPower(), 150);
        EXPECT_EQ(a.GetVehicle()->GetColor(), "red");
        EXPECT_EQ(a.GetLeader(), "leader");
        EXPECT_EQ(a.GetRescues(), 100);
}
