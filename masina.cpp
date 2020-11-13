#include <algorithm>
#include <iostream>
#include "masina.h"

std::ostream &operator<<(std::ostream &os, const masina &masina) {
    os << masina.nume << " " << masina.tip_combustibil << " " << masina.motor << " " << masina.culoare << " " << masina.pret <<'\n';
    return os;
}

std::istream &operator>>(std::istream &f, masina &masina){

    f >> masina.nume;
    f >> masina.tip_combustibil;
    f >> masina.motor;
    f >> masina.culoare;
    f >> masina.pret;

    return f;

}


