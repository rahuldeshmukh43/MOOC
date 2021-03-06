/*
 * weapon.cpp
 *
 *  Created on: Nov 25, 2020
 *      Author: rahul
 */

#include "weapon.h"

//Weapon
Weapon::Weapon(char x):type(x),strength(0){}
void Weapon::setPower(int x){strength=x;}
int Weapon::return_strength(){return strength;}
char Weapon::return_type(){return type;}

//Rock
Rock::Rock():Weapon('r'){}
bool Rock::battle(Weapon x){
	int s = this->return_strength(), x_s = x.return_strength();
	//int s = strength, x_s = x.strength;
	if(x.return_type()=='p'){s/=2;x_s*=2;}
	if(x.return_type()=='s'){s*=2;x_s/=2;}
	if(s>x_s){return true;}
	else{return false;}
}

//Paper
Paper::Paper():Weapon('p'){}
bool Paper::battle(Weapon x){
	int s = this->return_strength(), x_s = x.return_strength();
		if(x.return_type()=='r'){s*=2;x_s/=2;}
		if(x.return_type()=='s'){s/=2;x_s*=2;}
		if(s>x_s){return true;}
		else{return false;}
}

//Scissor
Scissor::Scissor():Weapon('s'){}
bool Scissor::battle(Weapon x){
	int s = this->return_strength(), x_s = x.return_strength();
			if(x.return_type()=='r'){s/=2;x_s*=2;}
			if(x.return_type()=='p'){s*=2;x_s/=2;}
			if(s>x_s){return true;}
			else{return false;}
}
