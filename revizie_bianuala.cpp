    #include "revizie_bianuala.h"

    void revizie_bianuala::calcul_pret(revizie &r, int &costr) {
        revizie::calcul_pret(r, costr);
        costr = costr + r.get_pret() * 2;
    }
