#ifndef REPREZENTANTA_AUTO_TIP_REVIZIE_H
#define REPREZENTANTA_AUTO_TIP_REVIZIE_H
#include "revizie.h"

// clasa 'tip_revizie' este derivata clasei 'revizie' si foloseste cele 2 functii virtuale ale ei
// in clasa 'tip_revizie' calculam cat are fiecare client de platit, in functie de tipul reviziei, iar costul se aduna la venitul anual al reprezentantei

class tip_revizie : public revizie {

public:
    void calcul_pret(const revizie &r, int& costr);
};

#endif //REPREZENTANTA_AUTO_TIP_REVIZIE_H
