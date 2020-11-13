#include <iostream>
#include <fstream>
#include "revizie.h"
#include "rep_auto.h"
#include "masina.h"

/* Am definit o clasa despre o reprezentanta_auto cu numele "rep_auto" (denumire, venit lunar, strada, nr, localitate).
Clasa  va avea un constructor implicit, un constructor cu argumente si un constructor de copiere;
+ o clasa prieten "masina"(nume, tip combustibil, motor, culoare)
 Am mai implementat si o clasa "revizie" ce face legatura intre celelalte doua clase si in care am facut citirea datelor. */

int main() {

    //std::vector<masina> masini;
    // std::fstream f("citire.txt");
    //masina m{};
    //f>>m;

    // rep_auto repr{};
    // f >> repr;
    revizie r, r1(25);//pt pret
    r.citire();
    r.afisare();
    return 0;

}
