#include <iostream>
#include <cstring>
#include <vector>

/* Am definit o clasa despre o reprezentanta_auto cu numele "rep_auto" (denumire, venit lunar, strada, nr, localitate).
Clasa  va avea un constructor implicit, un constructor cu argumente si un constructor de copiere;
 Voi implementa destructorul clasei, o metoda pentru citire si una apentru afisare. Apoi se citesc 4 reprezentate
  auto ale aceleiasi firme si sa se calculeze venitul mediu anual. + o clasa prieten "masina"(nume, tip combustibil, motor, culoare) */

class rep_auto
{
    std::string denumire, strada;
    char *localitate;
    int nr;
    int venit_anual;
    friend class masina;

public:

    int getVenitAnual() const {
        return venit_anual;
    }


    rep_auto () {
        denumire = " ";
        strada = " ";
        nr = 0;
        venit_anual = 0;
        localitate = new char[50];
        strcpy(localitate, "necunoscut");
    }

    rep_auto( std::string nume1, std::string strada1, int nr, char * loc, int venit_anual)
    {
        denumire = std::move(nume1);
        strada = std::move(strada1);
        this->nr = nr;
        this->venit_anual = venit_anual;
        localitate = new char [strlen(loc)+1];
        strcpy(localitate,loc);
    }

    virtual ~rep_auto() {
        delete []localitate;

    }

    rep_auto(const rep_auto &repr)
    {
        denumire = repr.denumire;
        strada = repr.strada;
        nr = repr.nr;
        venit_anual = repr.venit_anual;
        localitate = new char [strlen(repr.localitate)+1];
        strcpy(localitate, repr.localitate);
    }

    void afisare ()
    {
        std::cout<<denumire<<" "<<strada<<" "<<nr<<" "<<localitate<<" "<<venit_anual<<'\n';

    }
};

class masina {
    std::string nume, tip_combustibil, motor, culoare;
    std::vector<rep_auto> reprezentante;
public:
    masina() = default;

    ~masina() = default;

    void citire(){

        std::cout << "Numele masinii: " << '\n';
        std::cin >> nume;
        std::cout << "Tipul de combustibil: " << '\n';
        std::cin >> tip_combustibil;
        std::cout << "Motor: " << '\n';
        std::cin >> motor;
        std::cout << "Culoare: " <<'\n';
        std::cin >> culoare;
        rep_auto repr;
        std::cin >> repr.denumire >> repr.localitate;
    }

    void afisare()
    {
        std::cout << "Numele masinii: " << '\n';
        std::cout << nume <<'\n';;
        std::cout << "Tipul de combustibil: " << '\n';
        std::cout << tip_combustibil <<'\n';;
        std::cout << "Motor: " << '\n';
        std::cout << motor <<'\n';
        std::cout << "Culoare: " <<'\n';
        std::cout << culoare <<'\n';
        rep_auto repr;
        std::cout << repr.denumire << repr.localitate;
    }
};

int main() {
    rep_auto r1("Suzuki", "Aviatorilor", 17, "Bucuresti", 360);
    r1.afisare();
    rep_auto r2("Suzuki", "Tei", 6, "Oradea", 280);
    r2.afisare();
    rep_auto r3("Suzuki", "Pietroasa", 101, "Campulung", 150);
    r3.afisare();
    rep_auto r4("Suzuki", "I.L. Caragiale", 2, "Pitesti", 260);
    r4.afisare();
    std::cout<<"Venitul mediu anual este: "<< (r1.getVenitAnual() + r2.getVenitAnual() + r3.getVenitAnual() +r4.getVenitAnual()) / 4 << '\n';

    masina m{};
    m.citire();
    m.afisare();

    return 0;

}
