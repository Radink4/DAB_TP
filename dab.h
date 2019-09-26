#ifndef DAB_H
#define DAB_H 

class client
{
	private:

	protected:
		int num_CNI;
		int numTel;
		char prenom;
		char nom;
		compte *compte_utilisateur;


	public:
		client();
		client(int cni, int tel, char nom[10], char pren[10]);
		~client();
	
};

///////////////////

class compte
{
	private:
		int solde;
		int numCompte;


	public:
		compte();
		compte(int sol, int num);

		~compte();

		double affSolde();

		void debiter(int ret);
		void crediter (int depot);
		
};


/////////////////////

class admin
{
	public:
		admin();
		~admin();
	
};







#endif