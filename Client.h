#ifndef DEF_CLIENT
#define DEF_CLIENT

#include <iostream>
#include <string>

class Client
{
public:
	Client();
	~Client();
	Client(int CIN, int tel , char nom[16], char prenom[16]);
	void consulter() const;

protected:
	Compte *compteClient;
	int m_CIN;
	std::string m_nom
	std::string m_prenom
	int m_tel;	
};

#endif