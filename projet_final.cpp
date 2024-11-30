//////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////
// projet_final.cpp : Ce fichier contient la fonction 'main./////////////////////////////////////
// L'exécution du programme commence et se termine à cet endroit.///////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////     Auteurs          ///////////////////////////////////////////////
///////////////////////// 1. Wilson FOTSING    ///////////////////////////////////////////////
//////////////////////// 2. Stephane GUIBONY  ///////////////////////////////////////////////
///////////////////////                      ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
//#include <vector> //pour les tableaux dynamiques
//#include <cstdlib> //Pour la gestion de la console

using namespace std ; 

#include "P_affichage_menu.h"
#include "P_sortie.h" 
#include "P_affichage_repertoire_malades.h"
//#include "P_resultat_test.h"
//#include "P_envoie_email.h"
#include "P_choix_option.h"
#include "P_affichage_cout_total_test.h"
#include "P_remplissage_repertoire_covid19.h"
#include "P_consultation_repertoire_patients.h"
#include "P_creation_tableau_initial_patients.h"


int main()
{
    int choix = 0;
    string lecture_clavier;

    P_creation_tableau_initial_patients();
    P_affichage_menu();

    cout << " \n votre choix --->  " ; 
    cin >> choix;

    switch (choix)
    {
    case 1 :
        P_remplissage_repertoire_covid19();
        P_choix_option();
        break;
    case 2 :
        P_affichage_repertoire_malades();
        cout << "Voulez-vous sortir ? o/n --> ";
        cin >> lecture_clavier;
        if ( lecture_clavier == "n" || lecture_clavier == "N") {
            P_choix_option();
        }
        break;
    case 4 :
        P_consultation_repertoire_patients();
        /*Nous avons omis le break express, pour que le systeme 
        excecute l'option 3 aussi, puisqu'on veut en meme tempe
        calculer le cout total. C'est pour cette meme raison que
        nous traitons le cas 4 avant le cas 3*/

        cout << " Total : ";
    case 3 :
        P_affichage_cout_total_test();
        cout << "\n Voulez-vous sortir ? o/n --> ";
        cin >> lecture_clavier;
        if (lecture_clavier == "n" || lecture_clavier == "N") {
            P_choix_option();
        }
        break;
    case 5 :
        P_sortie();
        break;
    default:
        P_affichage_menu();
        break;
    }

    return 0; 
}






