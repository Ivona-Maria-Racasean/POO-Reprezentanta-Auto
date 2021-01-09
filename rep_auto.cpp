#include <cstring>
#include <iostream>
#include "rep_auto.h"
#include "reparatie.h"
#include "tip_revizie.h"



int rep_auto::getVenitAnual() const {
    return venit_anual;
}

rep_auto::rep_auto(std::string nume1, std::string strada1, int nr, std::string loc1) {
    denumire = std::move(nume1);
    strada = std::move(strada1);
    this->nr = nr;
    localitate = std::move(loc1);
}


std::istream &operator>>(std::istream &f, rep_auto &repr) {
    f >> repr.denumire >> repr.strada >> repr.nr >> repr.localitate;
    return f;
}

rep_auto &rep_auto::operator=(const rep_auto &rep_auto) {
    denumire = rep_auto.denumire;
    strada = rep_auto.strada;
    nr = rep_auto.nr;
    localitate = rep_auto.localitate;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const rep_auto &rep_auto) {
    os << "Reprezentanta " << rep_auto.denumire << " " << "cu adresa " << rep_auto.strada << " " << rep_auto.nr << " "
       << "din orasul " << rep_auto.localitate << " are urmatorul venit anual: ";
    return os;
}

void rep_auto::repara(const revizie &r,  tip_revizie &t) {
    this->revizii.push_back(r);
    int costr = 0;
    t.calcul_pret(r,costr);
    std :: cout << "Clientul va plati pe an suma: " << costr <<'\n';
    this->venit_anual += costr;
}


