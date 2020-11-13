
#include "revizie.h"
#include <fstream>
#include <iostream>


void revizie::citire() {
   std::fstream in("citire.txt");
     rep_auto reprezentanta;
     masina m;
     in >> pret;
     for(auto& rep : reparatii) {
         in >> reprezentanta.localitate >> reprezentanta.venit_anual >> reprezentanta.denumire >> reprezentanta.strada  >> reprezentanta.nr;
         reparatii.push_back(reprezentanta);
     }
     for(auto& masina : masini)
     {
         in >> m.nume >> m.culoare >> m.pret >> m.tip_combustibil >> m.motor;
         masini.push_back(m);
     }
}

    void revizie::afisare(){
    rep_auto reprezentanta;
    masina m;
    std :: cout << reprezentanta.localitate << " " << reprezentanta.venit_anual << " " << reprezentanta.denumire << " " << reprezentanta.strada  << " " << reprezentanta.nr;
    std :: cout << m.nume << " " << m.culoare << " " << m.pret << " " << m.tip_combustibil << " " << m.motor;

}