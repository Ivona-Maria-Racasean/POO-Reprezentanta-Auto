    #include "piesa.h"


    piesa::piesa( std::string material, float greutate, bool extint, int numar) : material(std::move(material)),greutate(greutate),extint(extint), numar(numar) {}

    const std::string &piesa::getMaterial() const {
        return material;
    }

    float piesa::getGreutate() const {
        return greutate;
    }

    bool piesa::isExtint() const {
        return extint;
    }

    int piesa::getNumar() const {
        return numar;
    }
