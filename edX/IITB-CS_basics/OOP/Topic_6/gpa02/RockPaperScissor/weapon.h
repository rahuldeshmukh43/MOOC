/*
 * weapon.h
 *
 *  Created on: Nov 25, 2020
 *      Author: rahul
 */

#ifndef WEAPON_H_
#define WEAPON_H_

class Weapon{
protected:
	int strength=0;
	char type='\0';//'r','p','s'
public:
	Weapon(char x);
	void setPower(int x);
	int return_strength();
	char return_type();
};

class Rock:public Weapon{
public:
	Rock();
	bool battle(Weapon x);
};

class Paper:public Weapon{
public:
	Paper();
	bool battle(Weapon x);
};

class Scissor:public Weapon{
public:
	Scissor();
	bool battle(Weapon x);
};

#endif /* WEAPON_H_ */
