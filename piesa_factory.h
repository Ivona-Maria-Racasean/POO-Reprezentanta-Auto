    #ifndef REPREZENTANTA_AUTO_PIESA_FACTORY_H
    #define REPREZENTANTA_AUTO_PIESA_FACTORY_H
    #include "piesa.h"

    class piesa_factory {
    public:
        static piesa bujie() { return piesa("metal", 0.06, true, 4); }
        static piesa volan() { return piesa("piele",2 , true, 1); }
        static piesa usa() { return piesa("tabla", 10 , false, 4); }
        static piesa toba() { return piesa("metal", 2, false, 1); }
        static piesa stergatoare() { return piesa("plastic", 0.05, false, 3); }
        static piesa baterie() { return piesa("plastic", 15, true, 1); }
    };


    #endif //REPREZENTANTA_AUTO_PIESA_FACTORY_H
