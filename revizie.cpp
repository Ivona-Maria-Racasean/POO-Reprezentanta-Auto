#include "revizie.h"

int revizie::get_pret() const {
    return pret;
}

int revizie::get_id() const {
    return id;
}

revizie::revizie(const masina &m, int pret, int id) : m(m), pret(pret), id(id){}


