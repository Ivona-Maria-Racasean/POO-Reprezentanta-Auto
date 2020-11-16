//
// Created by ivona on 11/10/2020.
//

#ifndef REPREZENTANTA_AUTO_MASINA_H
#define REPREZENTANTA_AUTO_MASINA_H

#include <string>
#include <vector>
//#include "revizie.h"

class masina {
    std::string nume, tip_combustibil, motor, culoare;
    int pret;
    friend class revizie;
public:

    //masina() = default;

    ~masina() = default;

    friend std::ostream &operator<<(std::ostream &os, const masina &masina);
    friend std::istream &operator>>(std::istream &f, masina &masina);

};
#endif //REPREZENTANTA_AUTO_MASINA_H
