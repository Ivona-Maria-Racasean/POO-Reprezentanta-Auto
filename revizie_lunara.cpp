    #include "revizie_lunara.h"

    void revizie_lunara::calcul_pret(revizie &r, int &costr) {
        revizie::calcul_pret(r, costr);
        costr = costr + r.get_pret() * 12;
    }
