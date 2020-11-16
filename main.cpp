#include <iostream>
#include <fstream>
#include "revizie.h"
#include "rep_auto.h"
//#include "masina.h"

/* Am definit o clasa despre o reprezentanta_auto cu numele "rep_auto" (denumire, venit lunar, strada, nr, localitate).
Clasa  va avea un constructor implicit, un constructor cu argumente si un constructor de copiere;
+ o clasa prieten "masina"(nume, tip combustibil, motor, culoare)
 Am mai implementat si o clasa "revizie" ce face legatura intre celelalte doua clase si in care am facut citirea datelor. */

/// am facut pana la urma functia "repara" in clasa rep_auto si in acea functie am calculat venitul anual. Sper ca e mai ok acum :D

int main() {

    std::fstream f("../citire.txt");
    masina m1, m2, m3;
    rep_auto r1, r2;

    f >> r1 >> r2;
    f >> m1 >> m2 >> m3;
    r1.repara({m1, 100});
    r1.repara({m2, 40});
    r2.repara({m3, 150});

    std :: cout << r1 << r1.getVenitAnual() << " lei" << '\n';
    std :: cout << r2 << r2.getVenitAnual() << " lei" << '\n';
    std :: cout << '\n';
    std :: cout << m1 << '\n' << m2 << '\n' << m3;


    return 0;

}
