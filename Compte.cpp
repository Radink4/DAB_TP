#include <iostream>
#include "Compte.h"

using namespace std;

Compte::Compte() : m_solde(0), m_numCompte(012345)/*6 chiffre pour numCompte*/
{

}

Compte::Compte(int solde, int numCompte) : m_solde(solde), m_numCompte(numCompte)
{

}
// Accesseurs et mutateurs
int Compte::consulterSolde()
{
	return this-> m_solde;

}

void Compte::debiter(int retrait)
{
	this -> m_solde = retrait - m_solde;
}

void Compte::crediter(int depot)
{
	this -> m_solde = depot + m_solde;
}