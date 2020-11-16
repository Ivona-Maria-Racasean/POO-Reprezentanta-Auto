//
// Created by ivona on 11/10/2020.
//

#ifndef REPREZENTANTA_AUTO_REVIZIE_H
#define REPREZENTANTA_AUTO_REVIZIE_H

#include <string>
#include "masina.h"
#include <vector>

class rep_auto;

class masina;

class revizie {

    masina m;
    int pret;

public:
    revizie() = default;

    revizie(const masina &m, int pret);

    int get_pret() const;

    ~revizie() = default;

};

#endif //REPREZENTANTA_AUTO_REVIZIE_H
