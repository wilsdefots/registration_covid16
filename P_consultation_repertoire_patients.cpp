//#include <iostream>

#include "Variables.h"

using namespace std;

void P_consultation_repertoire_patients() {
    //choix de l'option 4
    cout << "---------------------------------------------------- \n\n"
        << "impression de la facture \n";
    for (Patient patient : liste_patients) {
        cout << patient.Nom << " " << patient.Prenom
            << " : " << patient.donnees_medicale.CoutTestCovid19 << endl;

    }


}