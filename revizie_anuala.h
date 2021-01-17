    #ifndef REPREZENTANTA_AUTO_REVIZIE_ANUALA_H
    #define REPREZENTANTA_AUTO_REVIZIE_ANUALA_H

    #include "revizie.h"

    class revizie_anuala : public revizie {
    public:
        revizie_anuala() = default;
        void calcul_pret(revizie &r, int &costr) override;

    };

    #endif //REPREZENTANTA_AUTO_REVIZIE_ANUALA_H
