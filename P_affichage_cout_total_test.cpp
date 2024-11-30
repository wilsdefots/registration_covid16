//#include<iostream>
#include "Variables.h"

using namespace std;

void P_affichage_cout_total_test() {
    //Si l'utilisateur a choisit l'option 3 
    double cout_total = 0;
    for (Patient patient : liste_patients) {
        cout_total += patient.donnees_medicale.CoutTestCovid19;
    }
    cout << " La facture totale est de : " << cout_total << " $ \n\n";

}