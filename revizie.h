#ifndef REPREZENTANTA_AUTO_REVIZIE_H
#define REPREZENTANTA_AUTO_REVIZIE_H

#include <string>
#include "masina.h"
#include <vector>

class masina;

class revizie {

protected:
    masina m;
protected:
    int pret;
public:
    revizie() = default;

    revizie(const masina &m, int pret);

    int get_pret() const;

    ~revizie() = default;
};

#endif //REPREZENTANTA_AUTO_REVIZIE_H
