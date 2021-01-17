    #ifndef REPREZENTANTA_AUTO_REVIZIE_BIANUALA_H
    #define REPREZENTANTA_AUTO_REVIZIE_BIANUALA_H

    #include "revizie.h"

    class revizie_bianuala : public revizie {
    public:
        revizie_bianuala() = default;
       void calcul_pret(revizie &r, int &costr) override;
    };

    #endif //REPREZENTANTA_AUTO_REVIZIE_BIANUALA_H
