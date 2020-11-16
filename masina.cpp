#include <algorithm>
#include <iostream>
#include "masina.h"

std::istream &operator>>(std::istream &f, masina &masina) {

    f >> masina.nume;
    f >> masina.tip_combustibil;
    f >> masina.motor;
    f >> masina.culoare;
    //f >> masina.pret;

    return f;

}

std::ostream &operator<<(std::ostream &os, const masina &masina) {
    os << "Detalii despre masina reparata: "<< '\n' << "Nume: " << masina.nume << " Tip combustibil: " << masina.tip_combustibil << " Motor: " << masina.motor << " Culoare: " << masina.culoare << '\n';
    return os;
}







