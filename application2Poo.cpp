#include <iostream>
#include <string>
using namespace std;
class Etudiant// on crée la classe avec Carre comme noms
{
	private:	// private signifie que on ne peut pas utiliser cette varaiable  cote dehors de la classe 
		int age;
		string nom,prenom;

	public:	// public signifie que on peut utiliser les attributs  ou les méthodes dans la fonction principale 
		void function(string nom,string prenom,int age)
		{
				cout << "Entrez votre Nom,  Prenom et  Age  \n";
				cin >> nom >> prenom >> age;
				  this->age = age;		// this nous permet de dire que age qui est private est egale  a age de la fonction
				  this->nom = nom;		
				  this->prenom = prenom;
				 cout << "voici les  caractéristiques  de l\'etudiant " << endl;
				 cout << "\nNom :  "<<  nom << "\nPrenom :  "<< prenom << "\nAge :  " << age << endl;
				  
		}
};

int main()	// fonction principale 
{
	int age;
	string nom,prenom;
	
	Etudiant  eleve;	// creation d'objet 
	 eleve.function(nom,prenom,age);
	
	return 0;
}

