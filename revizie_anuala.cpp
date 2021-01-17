    #include "revizie_anuala.h"

    void revizie_anuala::calcul_pret(revizie &r, int &costr) {
        revizie::calcul_pret(r, costr);
        costr = costr + r.get_pret();
    }
