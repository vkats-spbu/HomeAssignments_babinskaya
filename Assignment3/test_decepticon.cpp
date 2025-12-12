/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignmnent4
*/

#include <gtest/gtest.h>
#include "Decepticon.h"
#include "Weapon.h"
#include "Vehicle.h"

//getters tests
TEST(DecepticonTest, GetDangerousTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Decepticon d("Megatron", 1000, 200, true, weapon, &vehicle, true, 100);
        EXPECT_TRUE(d.GetDangerous());
}

TEST(DecepticonTest, GetKillsTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
       	Decepticon d("Megatron", 1000, 200, true, weapon, &vehicle, true, 100);
        EXPECT_EQ(d.GetKills(), 100);
}

//setters tests
TEST(DecepticonTest, SetDangerousTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Decepticon d("Megatroon", 1000, 200, true, weapon, &vehicle, true, 100);
        d.SetDangerous(false);
        EXPECT_FALSE(d.GetDangerous());
}

TEST(DecepticonTest, SetKillsTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Decepticon d("Megatron", 1000, 200, true, weapon, &vehicle, true, 100);
        d.SetKills(200);
        EXPECT_EQ(d.GetKills(), 200);
}

//class methods tests
TEST(DecepticonTest, MethodTransforTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Decepticon d("Megatron", 1000, 200, true, weapon, &vehicle, true, 100);
        EXPECT_EQ(d.Transform(), "Decepticon::Transform() from Decepticon");
}

TEST(DecepticonTest, MethodSpeakTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Decepticon d("Megatron", 1000, 200, true, weapon, &vehicle, true, 100);
        EXPECT_EQ(d.Speak(), "Decepticon::Speak() from Decepticon");
}

TEST(DecepticonTest, MethodFireTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Decepticon d("Megatron", 1000, 200, true, weapon, &vehicle, true, 100);
        EXPECT_EQ(d.Fire(), "Decepticon::Fire() from Decepticon");
}

TEST(DecepticonTest, Destraction) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Decepticon d("Optimus Prime", 1000, 200, true, weapon, &vehicle, true, 100);
        EXPECT_EQ(d.Destroy(), "everything destroyed");
}


//costructor tests

TEST(DecepticonConstructorTest, ConstructorTestEmpty) {
        Decepticon d;
        EXPECT_EQ(d.GetName(), "Unknown");
        EXPECT_EQ(d.GetStrength(), 0);
        EXPECT_EQ(d.GetSpeed(), 0);
        EXPECT_FALSE(d.GetAmmo());
        EXPECT_EQ(d.GetWeapon().GetName(), "laser");
        EXPECT_EQ(d.GetVehicle()->GetType(), "car");
        EXPECT_EQ(d.GetWeapon().GetPower(), 100);
        EXPECT_EQ(d.GetVehicle()->GetColor(), "red");
        EXPECT_FALSE(d.GetDangerous());
        EXPECT_EQ(d.GetKills(), 0);
}

TEST(DecepticonConstructorTest, ConstructorTestWithoutOneParameter) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Decepticon d("Megatron", 1000, 200, true, weapon, &vehicle, true);
        EXPECT_EQ(d.GetName(), "Magetron");
        EXPECT_EQ(d.GetStrength(), 1000);
        EXPECT_EQ(d.GetSpeed(), 200);
        EXPECT_TRUE(d.GetAmmo());
        EXPECT_EQ(d.GetWeapon().GetName(), "laser");
        EXPECT_EQ(d.GetWeapon().GetPower(), 150);
        EXPECT_EQ(d.GetVehicle()->GetColor(), "red");
        EXPECT_TRUE(d.GetDangerous());
        EXPECT_EQ(d.GetKills(), 0);
}

TEST(DecepticonConstructorTest, ConstructorTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Decepticon d("Megatron", 1000, 200, true, weapon, &vehicle, true, 100);
        EXPECT_EQ(d.GetName(), "Megatron");
        EXPECT_EQ(d.GetStrength(), 1000);
        EXPECT_EQ(d.GetSpeed(), 200);
        EXPECT_TRUE(d.GetAmmo());
        EXPECT_EQ(d.GetWeapon().GetName(), "laser");
        EXPECT_EQ(d.GetVehicle()->GetType(), "jet");
        EXPECT_EQ(d.GetWeapon().GetPower(), 150);
        EXPECT_EQ(d.GetVehicle()->GetColor(), "red");
        EXPECT_TRUE(d.GetDangerous());
        EXPECT_EQ(d.GetKills(), 100);
}
