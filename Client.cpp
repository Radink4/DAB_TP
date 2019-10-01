#include <iostream>
#include "Client.h"
using namespace std;

//Constructeur par défaut
Client::Client()
{
	this->m_CIN = 012345671;//12 chiffres
	this->m_tel = 12345670;//10 chiffres
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
Client::~Client()
{
	
}
void Client::consulter() const
{
cout << "Votre CIN : " << m_CIN << endl;
cout << "Votre numero de telephone : " << m_tel << endl;
cout << "Votre Nom : " << m_nom << endl;
cout << "Votre Prenom : " << m_prenom << endl;
}