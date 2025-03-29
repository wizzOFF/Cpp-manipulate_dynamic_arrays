
#include <iostream>
#include <vector> //Ne pas oublier !
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

   int const nombreMeilleursScores(5);  //La taille du tableau
   
   vector<int> meilleursScores(nombreMeilleursScores);  //Déclaration du tableau
   
   meilleursScores[0] = 118218;  //Remplissage de la première case
   meilleursScores[1] = 100432;  //Remplissage de la deuxième case
   meilleursScores[2] = 87347;   //Remplissage de la troisième case
   meilleursScores[3] = 64523;   //Remplissage de la quatrième case
   meilleursScores[4] = 31415;   //Remplissage de la cinquième case

   return 0;
}