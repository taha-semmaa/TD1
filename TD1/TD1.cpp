
// TD_complex.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Complex.h"
using namespace std;
int main()
{
    Complex Z1; //appel de constructeur sans parametre
    cout << "Hello C++!\n";
    Z1.m_print();
    Complex Z2 = Z1;
    Z2.m_print(); // appel de constructeur de recopie
    Complex ZC;
    ZC = Z2.m_conjugue();
    cout << "affichage du conjuge :\n";
    ZC.m_print();
    Complex Z3(2.1, 3.5); //appel de constructeur avec parametres
    Z3.m_print();
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.



