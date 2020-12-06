#include <iostream>
#include "reparatie.h"

void reparatie::exceptie(masina &m) {

    //daca pretul reparatiei este mai mare decat 10000, atunci masina
    // nu va fi reparata de reprezentanta(o ducem la fiare vechi ^_^)

    costrep = m.get_costrep();
    if (costrep < 10000)
        std::cout << "Masina poate fi reparata" << '\n';
    else
        throw std::invalid_argument("Masina nu poate fi reparata de catre reprezentanta");
}

