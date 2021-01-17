    #include <cstring>
    #include <iostream>
    #include "rep_auto.h"
    #include "reparatie.h"
    #include "revizie_lunara.h"
    #include "revizie_anuala.h"
    #include "revizie_bianuala.h"


    int rep_auto::getVenitAnual() const {
        return venit_anual;
    }

    rep_auto::rep_auto(std::string nume1, std::string strada1, int nr, std::string loc1) {
        denumire = std::move(nume1);
        strada = std::move(strada1);
        this->nr = nr;
        localitate = std::move(loc1);
    }


    std::istream &operator>>(std::istream &f, rep_auto &repr) {
        f >> repr.denumire >> repr.strada >> repr.nr >> repr.localitate;
        return f;
    }

    rep_auto &rep_auto::operator=(const rep_auto &rep_auto) {
        denumire = rep_auto.denumire;
        strada = rep_auto.strada;
        nr = rep_auto.nr;
        localitate = rep_auto.localitate;
        return *this;
    }

    std::ostream &operator<<(std::ostream &os, const rep_auto &rep_auto) {
        os << "Reprezentanta " << rep_auto.denumire << " " << "cu adresa " << rep_auto.strada << " " << rep_auto.nr << " "
           << "din orasul " << rep_auto.localitate << " are urmatorul venit anual: ";
        return os;
    }

    void rep_auto::repara(revizie &&r) {
        this->revizii.push_back(r);
        int costr = 0;
        int tip;
        std :: cout << "Tipul este: ";
        std :: cin >> tip;
        // tip = 1 -> Revizie lunara
        // tip = 2 -> Revizie bianuala
        // tip = 3 -> Revizie anuala
        switch(tip){
            case 1:{
                std :: cout << "Revizie lunara" << '\n';
                revizie_lunara rv;
                rv.calcul_pret(r, costr);
                std :: cout << "Clientul va plati pe an suma: " << costr <<'\n';
                this->venit_anual += costr;
            }
                break;
            case 2:{
                std :: cout << "Revizie bianuala" << '\n';
                revizie_bianuala rv;
                rv.calcul_pret(r, costr);
                std :: cout << "Clientul va plati pe an suma: " << costr <<'\n';
                this->venit_anual += costr;
            }
            break;
            case 3:{
                std :: cout << "Revizie anuala"<< '\n';
                revizie_anuala rv;
                rv.calcul_pret(r, costr);
                std :: cout << "Clientul va plati pe an suma: " << costr <<'\n';
                this->venit_anual += costr;
            }
            break;
        }


    }


