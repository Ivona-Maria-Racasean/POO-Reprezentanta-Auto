#include <iostream>
#include "reparatie.h"

void reparatie::repara(masina &m) {

    //daca pretul reparatiei este mai mare decat 10000, atunci masina
    // nu va fi reparata de reprezentanta(o ducem la fiare vechi ^_^)

    m.costrep = m.get_costrep();
    if (m.costrep < 10000)
        std::cout << "Masina poate fi reparata" << '\n';
    else
        throw std::invalid_argument("Masina nu poate fi reparata de catre reprezentanta");
}