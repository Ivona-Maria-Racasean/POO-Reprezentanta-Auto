#include "tip_revizie.h"
// id = 1 -> Revizie lunara
// id = 2 -> Revizie o data la 6 luni
// id = 3 -> Revizie anuala

void tip_revizie::calcul_pret(const revizie &r, int &costr) {

    if ( r.get_id() == 1 )
        costr = costr + r.get_pret() * 12;
    else
        if ( r.get_id() == 2 )
            costr = costr + r.get_pret() * 2;
        else
            if ( r.get_id() == 3 )
                costr = r.get_pret();
}



