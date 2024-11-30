
//#include <iostream>

#include "Variables.h"

void P_resultat_test(Patient& patient) {
    if ((patient.donnees_medicale.temperature_bucale > 38.8) &&
        (patient.donnees_medicale.spo2 < 0.88) &&
        (patient.donnees_medicale.etatVomissement == 1)
        ) {
        patient.donnees_medicale.resultat = "cas suspect";
        liste_suspects.push_back(patient);
    }

}