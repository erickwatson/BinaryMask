// BinaryMask.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

const char CHAINSAW = 0x01;
const char PISTOL = 0x01 << 1;
const char SHOTGUN = 0x01 << 2;
const char SUPER_SHOTGUN = 0x01 << 3;
const char CHAINGUN = 0x01 << 4;
const char ROCKET_LAUNCHER = 0x01 << 5;
const char PLASMA_GUN = 0x01 << 6;
const char BFG9000 = 0x01 << 7;

const int WEAPONS_COUNT = 9;

const char* weapons[] = {
	"Fists", "Chainsaw", "Pistol", "Shotgun", "Super Shotgun", "Chaingun",
		"Rocket Launcher", "Plasma Gun", "BFG 9000"
};


void printInventory(char inventory)
{
	cout << weapons[0] << " | ";
	for (int i = 1; i < WEAPONS_COUNT; i++)
	{
		char mask = 0x01 << i - 1;
		if ((inventory & mask) == mask) {
			cout << weapons[i] << " | ";
		}

	}

	cout << endl;


}

void addToInventory(char& inventory, char weapon)
{
	inventory |= weapon;
}




void main()
{
	char inventory = 0;
	addToInventory(inventory, CHAINSAW);
	addToInventory(inventory, SUPER_SHOTGUN);
	printInventory(inventory);

	cin.get();


	system("PAUSE");

    return;
}

