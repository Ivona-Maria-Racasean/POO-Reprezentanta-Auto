#include <algorithm>
#include <iostream>
#include "masina.h"
#include "reparatie.h"

std::istream &operator>>(std::istream &f, masina &masina) {

    reparatie r{};
    try {
        f >> masina.costrep;
        f >> masina.nume;
        f >> masina.tip_combustibil;
        f >> masina.motor;
        f >> masina.culoare;
        std::cout << "Costul reparatiei masinii " << masina.nume << " este " << masina.costrep << '\n';
        masina.masini.emplace_back(masina);
    }
    catch (std::invalid_argument &e) {
        std::cout << e.what() << '\n';
    }
    r.exceptie(masina);

    return f;

}

std::ostream &operator<<(std::ostream &os, const masina &masina) {
    os << "Detalii despre masina reparata: " << '\n' << "Nume: " << masina.nume << '\n' << "Tip combustibil: "
       << masina.tip_combustibil << '\n' << "Motor: " << masina.motor << '\n' << "Culoare: " << masina.culoare << '\n';
    return os;
}

int masina::get_costrep() const {
    return costrep;
}







