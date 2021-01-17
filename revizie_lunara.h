    #ifndef REPREZENTANTA_AUTO_REVIZIE_LUNARA_H
    #define REPREZENTANTA_AUTO_REVIZIE_LUNARA_H

    #include "revizie.h"

    class revizie_lunara : public revizie {
    public:
        revizie_lunara() = default;
        void calcul_pret(revizie &r, int &costr) override;

    };

    #endif //REPREZENTANTA_AUTO_REVIZIE_LUNARA_H
