#ifndef REPREZENTANTA_AUTO_MASINA_H
#define REPREZENTANTA_AUTO_MASINA_H

#include <string>
#include <vector>


class masina {

    int costrep;
    std::string nume, tip_combustibil, motor, culoare;

    std::vector<masina> masini;

    friend class reparatie;

public:

    masina() = default;

    friend std::ostream &operator<<(std::ostream &os, const masina &masina);

    friend std::istream &operator>>(std::istream &f, masina &masina);

    ~masina() = default;

    int get_costrep() const;
};

#endif //REPREZENTANTA_AUTO_MASINA_H