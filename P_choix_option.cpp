#include<iostream>
//#include<vector>
#include <cstdlib>

using namespace std;

#include "P_affichage_menu.h"
#include "P_remplissage_repertoire_covid19.h"

#include "P_affichage_repertoire_malades.h"
#include "P_consultation_repertoire_patients.h"
#include "P_affichage_cout_total_test.h"
#include "P_sortie.h" 


void P_choix_option() {
    system("cls"); // nettoyage de la console (Fonctionne uniquement sous Windows)
    int choix_option = 0;
    cout << " \n Rappel du menu : \n ";
    P_affichage_menu();
    cout << "\n Faites un choix parmis les option 1 a 5 "
        << " du menu  -->  ";
    cin >> choix_option;
    switch (choix_option)
    {
    case 1:
        P_remplissage_repertoire_covid19();
    case 2:
        P_affichage_repertoire_malades();
        break;
    case 4:
        P_consultation_repertoire_patients();
        cout << "Cout total : ";
    case 3:
        P_affichage_cout_total_test();
        break;
    case 5:
        P_sortie();
        break;
    default:
        break;
    }

}