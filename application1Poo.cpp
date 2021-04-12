

#include <iostream>
using namespace std;
class Carre	// on crée la classe avec Carre comme noms
{
	private:	// private signifie que on ne peut pas utiliser cette varaiable  cote dehors de la classe 
		int cote;

	public:	// public signifie que on peut utiliser les attributs  ou les méthodes dans la fonction principale 
		int fonction()
		{
			//declaration et Définition de la méthode  fonction qui demande  a l'utilisateur de rentrer une valeur 
			int c;
			cout << "********Calcul propriétés d'un' carré*********" << endl;
			cout << "Entrez la valeur du coté en m:\t";
			cin >> c;

			return c;	// on retourne la valeur 
		}

	int perimetre(int cote)	// declaration et Définition de la méthode perimetre qui renvoie l'argument en le multiplient  par 4 
	{

		return 4 * cote;
	}
	int surface(int cote)	// declaration et Définition de la méthode surface qui renvoie l'argument en le multiplient  par lui meme 
	{
		return (cote *cote);
	}
};

int main()	// fonction principale 
{
	int c;
	Carre carre1;	// creation d'objet 

	c = carre1.fonction();	// on appeller  la fonction puis on enregistre le nombre retourner de la fonction dans la varaible c 
	cout << "Périmètre du carré :  ";
	cout << carre1.perimetre(c) << " m" << endl;	// on affiche les resultat de la fonction  perimetre
	cout << "Surface du carré : ";
	cout << carre1.surface(c) << " m2" << endl;	// on affiche les resultat de la fonction  surface
	return 0;
}



