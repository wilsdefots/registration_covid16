//#include<iostream>
//#include<vector>

#include "P_resultat_test.h"

void P_creation_tableau_initial_patients() {
    Patient tableau[10];
    tableau[0].Nom = "Fotsing";
    tableau[0].Prenom = "Wilson";
    tableau[0].mail = "wfotsing@etu.uqac.ca";
    tableau[0].donnees_medicale.etatVomissement = 1;
    tableau[0].donnees_medicale.fiev = 1;
    tableau[0].donnees_medicale.Headeache = 1;
    tableau[0].donnees_medicale.spo2 = 0.69;
    tableau[0].donnees_medicale.temperature_bucale = 39;
    tableau[0].donnees_medicale.CoutTestCovid19 = 35;
    tableau[1].Nom = "Guibony";
    tableau[1].Prenom = "Stephane";
    tableau[1].mail = "monbleonGstephane@etu.uqac.ca";
    tableau[1].donnees_medicale.etatVomissement = 1;
    tableau[1].donnees_medicale.fiev = 0;
    tableau[1].donnees_medicale.Headeache = 1;
    tableau[1].donnees_medicale.spo2 = 0.90;
    tableau[1].donnees_medicale.temperature_bucale = 38;
    tableau[1].donnees_medicale.CoutTestCovid19 = 60;
    tableau[2].Nom = "Stephanie";
    tableau[2].Prenom = "Balla";
    tableau[2].mail = "stbal@gmail.com";
    tableau[2].donnees_medicale.etatVomissement = 0;
    tableau[2].donnees_medicale.fiev = 1;
    tableau[2].donnees_medicale.Headeache = 1;
    tableau[2].donnees_medicale.spo2 = 0.79;
    tableau[2].donnees_medicale.temperature_bucale = 41;
    tableau[2].donnees_medicale.CoutTestCovid19 = 17;
    tableau[3].Nom = "Tawe";
    tableau[3].Prenom = "Marcel";
    tableau[3].mail = "marcelst@yahoo.fr";
    tableau[3].donnees_medicale.etatVomissement = 1;
    tableau[3].donnees_medicale.fiev = 1;
    tableau[3].donnees_medicale.Headeache = 1;
    tableau[3].donnees_medicale.spo2 = 0.81;
    tableau[3].donnees_medicale.temperature_bucale = 43;
    tableau[3].donnees_medicale.CoutTestCovid19 = 8;
    tableau[4].Nom = "Maurice";
    tableau[4].Prenom = "Tremblay";
    tableau[4].mail = "M.tremblay07@gmail.com";
    tableau[4].donnees_medicale.etatVomissement = 1;
    tableau[4].donnees_medicale.fiev = 0;
    tableau[4].donnees_medicale.Headeache = 1;
    tableau[4].donnees_medicale.spo2 = 0.8;
    tableau[4].donnees_medicale.temperature_bucale = 39.5;
    tableau[4].donnees_medicale.CoutTestCovid19 = 11.25;
    tableau[5].Nom = "Domtcheu";
    tableau[5].Prenom = "Yvana";
    tableau[5].mail = "YvanaJoyce09@cegepChicoutimi.qc.ca";
    tableau[5].donnees_medicale.etatVomissement = 1;
    tableau[5].donnees_medicale.fiev = 1;
    tableau[5].donnees_medicale.Headeache = 1;
    tableau[5].donnees_medicale.spo2 = 0.79;
    tableau[5].donnees_medicale.temperature_bucale = 40.03;
    tableau[5].donnees_medicale.CoutTestCovid19 = 12.30;
    tableau[6].Nom = "Mamadou";
    tableau[6].Prenom = "Diallo";
    tableau[6].mail = "mdiallo@etu.uqac.ca";
    tableau[6].donnees_medicale.etatVomissement = 0;
    tableau[6].donnees_medicale.fiev = 1;
    tableau[6].donnees_medicale.Headeache = 0;
    tableau[6].donnees_medicale.spo2 = 0.92;
    tableau[6].donnees_medicale.temperature_bucale = 38.5;
    tableau[6].donnees_medicale.CoutTestCovid19 = 11;
    tableau[7].Nom = "Jean-Brue";
    tableau[7].Prenom = "Larousse";
    tableau[7].mail = "larousse45@gmail..com";
    tableau[7].donnees_medicale.etatVomissement = 1;
    tableau[7].donnees_medicale.fiev = 0;
    tableau[7].donnees_medicale.Headeache = 1;
    tableau[7].donnees_medicale.spo2 = 0.85;
    tableau[7].donnees_medicale.temperature_bucale = 41;
    tableau[7].donnees_medicale.CoutTestCovid19 = 6;
    tableau[8].Nom = "Truc";
    tableau[8].Prenom = "Adams";
    tableau[8].mail = "Adamsmith@edima.cameroun.org";
    tableau[8].donnees_medicale.etatVomissement = 1;
    tableau[8].donnees_medicale.fiev = 1;
    tableau[8].donnees_medicale.Headeache = 1;
    tableau[8].donnees_medicale.spo2 = 0.79;
    tableau[8].donnees_medicale.temperature_bucale = 42;
    tableau[8].donnees_medicale.CoutTestCovid19 = 7;
    tableau[9].Nom = "Mba";
    tableau[9].Prenom = "Emeran";
    tableau[9].mail = "nkunkuma27@hotmail.com";
    tableau[9].donnees_medicale.etatVomissement = 0;
    tableau[9].donnees_medicale.fiev = 1;
    tableau[9].donnees_medicale.Headeache = 0;
    tableau[9].donnees_medicale.spo2 = 0.98;
    tableau[9].donnees_medicale.temperature_bucale = 39;
    tableau[9].donnees_medicale.CoutTestCovid19 = 14;
    for (int i = 0; i < 10; i++) {
        P_resultat_test(tableau[i]);
        liste_patients.push_back(tableau[i]);

    }

}