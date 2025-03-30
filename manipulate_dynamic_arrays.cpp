
#include <iostream>
//#include <vector> //Ne pas oublier !

#include <string>

using namespace std;

int main()
{
   /*
    vector<int> tableau(5);

   vector<int> tableau(5, 3);  //Crée un tableau de 5 entiers valant tous 3
   vector<string> listeNoms(12, "Sans nom");
   //Crée un tableau de 12 strings valant toutes « Sans nom »

   vector<double> tableauSansCases; //Crée un tableau de 0 nombre à virgule
   */
   /*
   int const nombreMeilleursScores(5);  //La taille du tableau
   
   vector<int> meilleursScores(nombreMeilleursScores);  //Déclaration du tableau
   
   meilleursScores[0] = 118218;  //Remplissage de la première case
   meilleursScores[1] = 100432;  //Remplissage de la deuxième case
   meilleursScores[2] = 87347;   //Remplissage de la troisième case
   meilleursScores[3] = 64523;   //Remplissage de la quatrième case
   meilleursScores[4] = 31415;   //Remplissage de la cinquième case

   vector<int> tableau(3,2);  //Un tableau de 3 entiers valant tous 2
   tableau.push_back(8);
   //On ajoute une 4ème case au tableau qui contient la valeur 8
   tableau.push_back(7);  //On ajoute une 5ème case qui contient la valeur 7
   tableau.push_back(14); //Et encore une avec le nombre 14 cette fois
   
   //Le tableau contient maintenant les nombres : 2 2 2 8 7 14

   tableau.pop_back(); //Et hop ! dernière case en moins
   tableau.pop_back(); //Et hop ! 1 case une case en moins
   */
   /* 
   vector<int> tableau(5,4); //Un tableau de 5 entiers valant tous 4
   int const taille(tableau.size());
   //Une variable qui contient la taille du tableau
   //La taille peut varier mais la valeur de cette variable ne changera pas
   //On utilise donc une constante
   //À partir d'ici, la constante 'taille' vaut donc 5
   */
   /*
   vector<double> notes; //Un tableau vide

   notes.push_back(12.5);  //On ajoute des cases avec les notes
   notes.push_back(19.5);
   notes.push_back(6);
   notes.push_back(12);
   notes.push_back(14.5);
   notes.push_back(15);
   
   double moyenne(0);
   for(int i(0); i<notes.size(); ++i)
   //On utilise notes.size() pour la limite de notre boucle
   {
      moyenne += notes[i];   //On additionne toutes les notes
   }

   moyenne /= notes.size();
   //On utilise à nouveau notes.size() pour obtenir le nombre de notes
   
   cout << "Votre moyenne est : " << moyenne << endl;
   */
   /*
   int const tailleX(5);
   int const tailleY(4);
   int tableau[tailleX][tailleY];
   */
   /*
   vector<vector<int> > grille;

   grille.push_back(vector<int>(5));   //On ajoute une ligne de 5 cases à notre grille
   grille.push_back(vector<int>(3,4)); //On ajoute une ligne de 3 cases contenant chacune le nombre 4 à notre grille

   grille[0].push_back(8);     //Ajoute une case contenant 8 à la première ligne du tableau

   grille[2][3] = 9;     //Change la valeur de la cellule (2,3) de la grille
   */

   /*
   string nomUtilisateur("Julien");
   cout << "Vous etes " << nomUtilisateur << "." <<endl;

   nomUtilisateur[0] = 'L';  //On modifie la première lettre
   nomUtilisateur[2] = 'c';  //On modifie la troisième lettre

   cout << "Ah non, vous etes " << nomUtilisateur << "!" << endl;
   */


   string texte("Portez ce whisky au vieux juge blond qui fume.");  //46 caractères
   cout << "Cette phrase contient " << texte.size() << " lettres." << endl;

   string prenom("Albert"); 
   string nom("Einstein");
   
   string total;    //Une chaîne vide
   total += prenom; //On ajoute le prénom à la chaîne vide
   total += " ";    //Puis un espace
   total += nom;    //Et finalement le nom de famille

   cout << "Vous vous appelez " << total << "." << endl;
   
   return 0;
}