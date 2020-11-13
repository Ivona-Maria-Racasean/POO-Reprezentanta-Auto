//
// Created by ivona on 11/10/2020.
//

#ifndef REPREZENTANTA_AUTO_REVIZIE_H
#define REPREZENTANTA_AUTO_REVIZIE_H

#include <string>
#include "rep_auto.h"
#include "masina.h"
#include <vector>
class rep_auto;
class masina;

class revizie {
  //  rep_auto reprezentanta;
  //  masina m;
    int pret;
    std::vector<rep_auto> reparatii;
    std::vector<masina> masini;

public:

   revizie(int pret) : pret(pret){};

   revizie() = default;

    ~revizie() = default;

    void citire();
    static void afisare();


};
#endif //REPREZENTANTA_AUTO_REVIZIE_H
