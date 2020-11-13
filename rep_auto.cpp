
#include <cstring>
#include <iostream>
#include "rep_auto.h"

//int rep_auto :: getVenitAnual() const {
  //  return venit_anual;}

rep_auto :: rep_auto( std::string nume1, std::string strada1, int nr, std::string loc1, int venit_anual)
{
denumire = std::move(nume1);
strada = std::move(strada1);
this->nr = nr;
this->venit_anual = venit_anual;
localitate = std::move(loc1);
}


std::istream &operator>>(std::istream &f, rep_auto &repr) {
   f >> repr.denumire >> repr.strada >> repr.nr >> repr.venit_anual >> repr.localitate;
    return f;
 }
 rep_auto &rep_auto::operator=(const rep_auto &rep_auto)
{
    denumire = rep_auto.denumire;
    strada = rep_auto.strada;
    nr = rep_auto.nr;
    venit_anual = rep_auto.venit_anual;
    localitate = rep_auto.localitate;
        return *this;
    }

std::ostream &operator<<(std::ostream &os, const rep_auto &rep_auto) {
    os <<rep_auto.denumire<<" "<<rep_auto.strada<<" "<<rep_auto.nr<<" "<<rep_auto.localitate<<" "<<rep_auto.venit_anual<<'\n';
    return os;
}


