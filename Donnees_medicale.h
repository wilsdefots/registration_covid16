#pragma once

#include<iostream>
#include <vector>

using namespace std;


struct Donnees_medicale {
    double CoutTestCovid19 = 0;
    double temperature_bucale{};
    double spo2{};
    bool Headeache = 0; // egale a 1 si le patient a mal a la tete et 0 sinon
    bool fiev = 0; //1 Si il fait la fievre et 0 sinon
    bool etatVomissement = 0; //egal a 1 si le patient a envie de vomir et 0 sinon
    string resultat = "Negatif";
    time_t date{};
};
