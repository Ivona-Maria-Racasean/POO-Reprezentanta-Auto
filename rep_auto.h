
#ifndef REPREZENTANTA_AUTO_REP_AUTO_H
#define REPREZENTANTA_AUTO_REP_AUTO_H

#include <string>
#include "revizie.h"
#include <vector>

class revizie;

class rep_auto {

    std::string denumire, strada, localitate;

    int nr = 0, venit_anual = 0;

    std::vector<revizie> revizii;

    friend class masina;

public:

    int getVenitAnual() const;

    rep_auto() = default;

    rep_auto(std::string nume1, std::string strada1, int nr, std::string loc1);

    void repara(const revizie &r);

    //void adauga(revizie &pret);

    ~rep_auto() = default;

    friend std::istream &operator>>(std::istream &, rep_auto &);

    friend std::ostream &operator<<(std::ostream &os, const rep_auto &rep_auto);

    rep_auto &operator=(const rep_auto &rep_auto);


};


#endif //REPREZENTANTA_AUTO_REP_AUTO_H
