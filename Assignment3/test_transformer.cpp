/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignmnent4
*/

#include <gtest/gtest.h>
#include "Transformer.h"
#include "Weapon.h"
#include "Vehicle.h"
#include "Autobot.h"

//getters and setters
TEST(TransformerTest, GetSet) {
	Weapon weapon("laser", 150);
	Vehicle vehicle("jet", "red");
	Autobot t("Optimus Prime", 1000, 200, true, weapon, &vehicle);

	EXPECT_EQ(t.GetName(), "Optimus Prime");
	EXPECT_EQ(t.GetStrength(), 1000);
	EXPECT_EQ(t.GetSpeed(), 200);
	EXPECT_TRUE(t.GetAmmo());
	EXPECT_EQ(t.GetWeapon().GetName(), "laser");
	EXPECT_EQ(t.GetVehicle()->GetType(), "jet");
	EXPECT_EQ(t.GetWeapon().GetPower(), 150);
	EXPECT_EQ(t.GetVehicle()->GetColor(), "red");

	t.SetName("Optimus");
	t.SetStrength(1500);
	t.SetSpeed(500);
	t.SetAmmo(false);
	Weapon w = t.GetWeapon();
	w.SetPower(250);
	t.SetWeapon(w);
	Vehicle vehicle_2 ("car", "green");
	t.SetVehicle(&vehicle_2);

	EXPECT_EQ(t.GetName(), "Optimus");
	EXPECT_EQ(t.GetStrength(), 1500);
	EXPECT_EQ(t.GetSpeed(), 500);
	EXPECT_FALSE(t.GetAmmo());
	EXPECT_EQ(t.GetWeapon().GetName(), "laser");
	EXPECT_EQ(t.GetVehicle()->GetType(), "car");
	EXPECT_EQ(t.GetWeapon().GetPower(), 250);
	EXPECT_EQ(t.GetVehicle()->GetColor(), "green");
}

//class method
TEST(TransformTest, SpeakMethodTest) {
	Weapon weapon("laser", 150);
	Vehicle vehicle("jet", "red");
	Autobot t("Optimus Prime", 1000, 200, true, weapon, &vehicle);
	EXPECT_EQ(t.Speak(), "Transfomer::Speak() from Transformer");
}

TEST(TransformTest, FireMethodTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Autobot t("Optimus Prime", 1000, 200, true, weapon, &vehicle);
        EXPECT_EQ(t.Fire(), "Transfomer::Fire() from Transformer");
}

//constructor tests
TEST(TransformerConstructorTest, ConstructorTestEmpty) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Autobot t;
        EXPECT_EQ(t.GetName(), "Unknown");
        EXPECT_EQ(t.GetStrength(), 0);
        EXPECT_EQ(t.GetSpeed(), 0);
        EXPECT_FALSE(t.GetAmmo());
        EXPECT_EQ(t.GetWeapon().GetName(), "laser");
        EXPECT_EQ(t.GetVehicle()->GetType(), "jet");
        EXPECT_EQ(t.GetWeapon().GetPower(), 100);
        EXPECT_EQ(t.GetVehicle()->GetColor(), "red");
}

TEST(TransformerConstructorTest, ConstructorTestWithoutOneParameter) {
        Autobot t("Optimus Prime", 1000, 200, true);
        EXPECT_EQ(t.GetName(), "Optimus Prime");
        EXPECT_EQ(t.GetStrength(), 1000);
        EXPECT_EQ(t.GetSpeed(), 200);
        EXPECT_TRUE(t.GetAmmo());
        EXPECT_EQ(t.GetWeapon().GetName(), "laser");
        EXPECT_EQ(t.GetVehicle()->GetType(), "jet");
        EXPECT_EQ(t.GetWeapon().GetPower(), 100);
	EXPECT_EQ(t.GetVehicle()->GetColor(), "red");
}

TEST(TransformerConstructorTest, ConstructorTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Autobot t("Optimus Prime", 1000, 200, true, weapon, &vehicle);
        EXPECT_EQ(t.GetName(), "Optimus Prime");
        EXPECT_EQ(t.GetStrength(), 1000);
        EXPECT_EQ(t.GetSpeed(), 200);
        EXPECT_TRUE(t.GetAmmo());
        EXPECT_EQ(t.GetWeapon().GetName(), "laser");
        EXPECT_EQ(t.GetVehicle()->GetType(), "jet");
        EXPECT_EQ(t.GetWeapon().GetPower(), 150);
        EXPECT_EQ(t.GetVehicle()->GetColor(), "red");
}
