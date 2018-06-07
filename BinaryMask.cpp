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

void printInventory(char inventory)
{
	cout << "Fists | ";
	if ((inventory & CHAINSAW) == CHAINSAW)
		cout << "Chainsaw | ";
	if ((inventory & PISTOL) == PISTOL)
		cout << "Pistol | ";
	if ((inventory & SHOTGUN) == SHOTGUN)
		cout << "Shotgun | ";
	if ((inventory & SUPER_SHOTGUN) == SUPER_SHOTGUN)
		cout << "Super Shotgun | ";
	if ((inventory & CHAINGUN) == CHAINGUN)
		cout << "Chaingun | ";
	if ((inventory & ROCKET_LAUNCHER) == ROCKET_LAUNCHER)
		cout << "Rocket Launcher | ";
	if ((inventory & PLASMA_GUN) == PLASMA_GUN)
		cout << "Plasma Gun | ";
	if ((inventory & BFG9000) == BFG9000)
		cout << "BFG 9000 | ";

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

