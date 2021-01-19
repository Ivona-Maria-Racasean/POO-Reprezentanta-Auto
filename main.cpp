        #include <iostream>
        #include <fstream>
        #include "revizie.h"
        #include "rep_auto.h"
        #include "reparatie.h"

        /* Am definit o clasa despre o reprezentanta_auto cu numele "rep_auto" (denumire, venit lunar, strada, nr, localitate).
        Clasa  va avea un constructor implicit, un constructor cu argumente si un constructor de copiere;
        + o clasa prieten "masina"(nume, tip combustibil, motor, culoare)
         Am mai implementat si o clasa "revizie" ce face legatura intre celelalte doua clase si in care am facut citirea datelor. */
        // "pret" din clasa "revizie" reprezinta pretul reviziei, iar "costrep" din clasa "masina" reprezinta costul reparatiei in urma reviziei
        // pentru tema 3 am ales sa folosesc Factory. Am creat clasa "piesa" ce ajuta la aflarea pieselor reparate in urma reviziilor

        int main() {

            std::fstream f("../citire.txt");
            masina m1, m2, m3;
            rep_auto r1, r2;

            f >> r1 >> r2 ;
            f >> m1 >> m2 >> m3;

            std :: cout << '\n';

            r1.repara({m1, 500});
            piesa p1 = piesa_factory::baterie();
            std:: cout << "Detalii despre piesa reperata:" << '\n' << " Material: " << p1.getMaterial() << '\n' << " Greutate: " << p1.getGreutate()<< " kg" << '\n';
            std:: cout << '\n';

            r1.repara({m2, 35});
            piesa p2 = piesa_factory::stergatoare();
            std:: cout << "Detalii despre piesa reperata:" << '\n' << " Material: " << p2.getMaterial() << '\n' << " Numar: " << p2.getNumar() << '\n';
            std:: cout << '\n';

            r2.repara({m3, 300});
            piesa p3 = piesa_factory::usa();
            std:: cout << "Detalii despre piesa reperata:" << '\n' << " Material: " << p3.getMaterial() << '\n' << " Greutate: " << p3.getGreutate() << " kg" << '\n';
            std:: cout << '\n';

            std::cout << '\n';

            std::cout << r1 << r1.getVenitAnual() << " lei" << '\n';
            std::cout << r2 << r2.getVenitAnual() << " lei" << '\n';
            std::cout << '\n';
            std::cout << m1 << '\n' << m2 << '\n' << m3 << '\n';


            return 0;

        }