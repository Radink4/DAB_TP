#include <iostream>
//#include "Admin.h"
#include "Client.h"
#include "Compte.h"

using namespace std;

int main()
{
	int select;
	int qtRet, qtDep;

	cout << "start" << endl;

	Compte co1;
	Client cl1;

	cout << "Consulter solde 1" << endl;
	cout << "Retirer somme 2" << endl;
	cout << "Déposer somme 3" << endl;
	cout << "Retirer carte 4" << endl;
	cout << "Fmenu" << endl;

	cin << select;

	switch(select)
	{
		case 1:
			cout << "Solde actuel de" << cl1.nom() << cl1.prenom() << ":"  << co1.solde() << endl;
		break;

		case 2:
			cout << "Indiquer montant :";
			cin << qtRet;

			co1.debiter(qtRet);
		break;

		case 3:
			cout << "Indiquer montant :";
			cin << qtDep;
			co1.crediter(qtDep);
		break;

		case 4:
			//quit
			exit
		break;

		default:
			cout << "Indiquer montant :";
		break;

	}

	
	return 0;
}
