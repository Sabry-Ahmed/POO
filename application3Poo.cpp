#include <iostream>
using namespace std;

	class Rectangle { 	// on crée notre class
	public:		// dans l'espace public 
		
		
		void setLongueur(double longueur) // une fonction set qui nous permet de initialiser  la variable  longueur dans la partie priver par  la valeur emis par l'utilisateur 
		{
			this -> longueur= longueur;
		}
		void setLargeur(double largeur) // une fonction set qui nous permet de initialiser la variable  largeur dans la partie priver par  la valeur emis par l'utilisateur  
		{
	 		this -> largeur = largeur ;
		}
		double getLongueur()	// une fonction get qui nous permet  d'afficher la longueur 
		{
			return longueur ;
		
		}
		double getLargeur()	// une fonction get qui nous permet d'afficher la largeur 
		{
		
			return largeur ;
 		}
 		double surfacee()		// fonction qui nous permet de calculer la surface et retourner le résultat  
		{
			double surface = largeur*longueur;
			return surface;

		}
       
     private:			// dans l'espace priver 
      	
      	double longueur;	// on crée notre variable longueur 
	double largeur;	// on crée notre variable largeur
       


};   
 
int main() {
	Rectangle rect1;		// on crée l'objet rect1 
	double x, y;			// on crée 2 variables de types double  
	
	cout << "Quelle largeur? ";	// on demande la largeur 
	cin >> x;
	
	
	
	cout<< "Quelle longueur? "; // on demande la longueur 
	cin >> y;
	
	rect1.setLargeur(x);		// on utilise la fonction set qui nous permet de ecrire la variable dans notre classe 
	rect1.setLongueur(y);
	
	

	cout<<"Voici la largeur: \t"  << rect1.getLargeur() << "\nvoici la longueur: \t" <<rect1.getLongueur()<<endl;	// on affiche les 2 variables avec la fonction get qui nous permet de lire
	cout<<"la surface est de : "<<rect1.surfacee()<<endl;								// on affiche la fonction  surface de la classe rectangle  
	
	
return 0;
}
