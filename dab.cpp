#include <iostream>
#include "dab.h"

using namespace std;




//CLIENT////////

// Constructeurs
client :: client()
{
	this->c = 12;
	this->t = 1234567890;
	this->n = "NOM";
	this->p = "PRENOM";


}

client :: client(int c, int t, char n, char p)
{
	this->c = c;
	this->t = t;
	this->n = n;
	this->p = p;

}



// Destructeurs



// Accesseurs et mutateurs


// Service










//COMPTE ////////

// Constructeurs
compte :: compte()
{
	this->solde = 0;
	this->n = 1234567890;


}

compte :: compte(int solde, int num)
{
	this->solde = solde;
	this->num = num;

}


// Destructeurs



// Accesseurs et mutateurs

double compte :: solde()
{
	return this-> solde;

}

void compte :: debiter(double ret)
{
	this->ret=solde - ret;
}

void compte :: crediter(double depot)
{
	this->depot=solde + depot;
}


// Service










//ADMIN ////////

// Constructeurs



// Destructeurs



// Accesseurs et mutateurs


// Service