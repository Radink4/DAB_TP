#ifndef DEF_COMPTE
#define DEF_COMPTE

#include <iostream>
#include <string>

class Compte : 
{
public:
	Compte();
	~Compte();
	Compte(int solde, int num);
	void debiter(int retrait);
	void crediter(int depot);
	void consulterSolde();

private:
	int m_solde;
	int m_numCompte;
};

#endif