    #ifndef REPREZENTANTA_AUTO_REVIZIE_H
    #define REPREZENTANTA_AUTO_REVIZIE_H

    #include <string>
    #include "masina.h"
    #include <vector>
    #include "piesa_factory.h"

    class masina;

    class revizie {

        masina m;
        int pret;

    protected:    int costr{} ;
    public:
        revizie() = default;

        revizie( const masina &m , int pret);

        virtual int get_pret() const;

        virtual void calcul_pret( revizie &r, int &costr);

        virtual ~revizie() = default;

    };

    #endif //REPREZENTANTA_AUTO_REVIZIE_H