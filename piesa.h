    #ifndef REPREZENTANTA_AUTO_PIESA_H
    #define REPREZENTANTA_AUTO_PIESA_H
    #include <string>

    class piesa {

        std::string material ;
        float greutate; // in kilograme ( pentru o singura piesa, in cazul in care exista mai multe)
        bool extint; //daca e piesa de interior -> 1 sau de exterior -> 0
        int numar;

    public:

        piesa( std::string material, float greutate, bool extint, int numar);

        const std::string &getMaterial() const;

        float getGreutate() const;

        bool isExtint() const;

        int getNumar() const;

    };


    #endif //REPREZENTANTA_AUTO_PIESA_H
