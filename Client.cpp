#include <iostream>
#include "dab.h"

using namespace std;

//Constructeur par défaut
Client::Client()
{
	this->m_CIN = 012345678991;//12 chiffres
	this->m_tel = 1234567890;//10 chiffres
	this->m_nom = "NOM";
	this->m_prenom = "PRENOM";


}
//Constructeur personnalisé
Client::Client(int CIN, int tel , char nom[16], char prenom[16])
{
	this->m_CIN = CIN;
	this->m_tel = tel;
	this->m_nom = nom;
	this->m_prenom = prenom;

}