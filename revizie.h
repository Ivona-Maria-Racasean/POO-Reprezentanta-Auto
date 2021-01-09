#ifndef REPREZENTANTA_AUTO_REVIZIE_H
#define REPREZENTANTA_AUTO_REVIZIE_H

#include <string>
#include "masina.h"
#include <vector>

class masina;

class revizie {

    masina m;
    int pret, id;
protected:    int costr=0;
public:
    revizie() = default;

    revizie(const masina &m, int pret, int id);

    virtual int get_pret() const;
    virtual int get_id() const;

    ~revizie() = default;
};

#endif //REPREZENTANTA_AUTO_REVIZIE_H