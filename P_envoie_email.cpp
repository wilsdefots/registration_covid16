//#include <iostream>

#include "Variables.h"

using namespace std; 

void P_envoie_email(Patient patient) {
    cout << " \n Resultat de votre examen : " << patient.donnees_medicale.resultat
        << " \n consultez vos courriels, nous vous avons envoye \n "
        << " un message vous indiquant la procedure a suivre a l'adresse : "
        << patient.mail << endl << endl;
}