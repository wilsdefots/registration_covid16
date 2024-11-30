//#include<iostream>
//#include<vector>

#include "Variables.h"
#include "P_resultat_test.h"
#include "P_envoie_email.h"

void P_remplissage_repertoire_covid19() {
    //cette procedure s'execute si l'utilisateur choit l'option 1
    Patient patient;
    string entrer_patient;
    cout << "Entrez les informations sur le nouveau patient \n nom --> ";
    cin >> patient.Nom;
    cout << " prenom --> ";
    cin >> patient.Prenom;
    cout << " adresse courriel --> ";
    cin >> patient.mail;
    cout << " Fait-il de la fievre ? 1 si oui  et 0 sinon \n  --> ";
    cin >> patient.donnees_medicale.fiev;
    cout << " A t il des sensations de vomir ? 1 si oui et 0 sinon \n --> ";
    cin >> patient.donnees_medicale.etatVomissement;
    cout << " A t il mal a la tete ? 1 si oui et 0 sinon \n  --> ";
    cin >> patient.donnees_medicale.Headeache;
    cout << " sa temperature bucale : --> ";
    cin >> patient.donnees_medicale.temperature_bucale;
    cout << "  son taux d'oxigene (Doit etre entre 0 et 100) --> ";
    cin >> patient.donnees_medicale.spo2;
    cout << " Combien a coute son test en $ ? (la reponse doit etre un reel) --> ";
    cin >> patient.donnees_medicale.CoutTestCovid19;
    liste_patients.push_back(patient);
    P_resultat_test(patient);
    system("cls"); // Pour degager de l'espace(permettre a l utilisateur de mieux voir)
    P_envoie_email(patient);
    cout << "\n Voulez-vous entrer un nouveau patient ? o/n ";
    cin >> entrer_patient;

    if (entrer_patient == "o"
        || entrer_patient == "O"
        || entrer_patient == "0"
        ) {
        P_remplissage_repertoire_covid19();
    }
    else {
        cout << " \n Merci d'avoir complete ces informations \n ";
    }
}