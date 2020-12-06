#include "revizie.h"

int revizie::get_pret() const {
    return pret;
}

revizie::revizie(const masina &m, int pret) : m(m), pret(pret) {}




