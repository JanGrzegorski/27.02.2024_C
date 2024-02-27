#include <iostream>
using namespace std;

class Samochody {
private:
    string marka;
    string kolor;
    float pojemnosc;
    float cena;
    int przebieg;
public:
    Samochody(string m, string k, float pj, float c, int przeb) {
        this->marka = m;
        this->kolor = k;
        this->pojemnosc = pj;
        this->cena = c;
        this->przebieg = przeb;

    }
    Samochody(string m, string k) {
        this->marka = m;
        this->kolor = k;
        this->prezentacjaSamochodu2();
    }
    void prezentacjaSamochodu() {
        setlocale(LC_ALL, "");
        cout << "Marka: " << this->marka << "\n";
        cout << "Kolor: " << this->kolor << "\n";
        cout << "Pojemność: " << this->pojemnosc << "\n";
        cout << "Cena: " << this->cena << "\n";
        cout << "Przebieg: " << this->przebieg << "\n";
        cout << "----------------------------------------------" << endl;
    }
    void prezentacjaSamochodu2() {
        setlocale(LC_ALL, "");
        cout << "##############################################" << endl;
        cout << "Marka: " << this->marka << "\n";
        cout << "Kolor: " << this->kolor << "\n";
        cout << "----------------------------------------------" << endl;
    }
};

int main()
{
    //Samochody fiat = Samochody("FIAT", "Zielony", 2.0, 250.123456786543, 180);
    // fiat.prezentacjaSamochodu();

    string marka[3] = { "Fiat","Volvo","VW" };
    string kolor[3] = { "Bialy","Czerwony","Zolty" };
    float pojemnosc[3] = { 1.2, 1.3, 2.1 };
    float cena[3] = { 180, 200, 145 };
    int przebieg[3] = { 0, 150, 333 };

    for (int i = 0; i < 3; i++) {
        Samochody sam = Samochody(marka[i], kolor[i],pojemnosc[i], cena[i], przebieg[1]);
        sam.prezentacjaSamochodu();
    }
    for (int i = 0; i < 3; i++) {
        Samochody samochod = Samochody(marka[i], kolor[i]);
    }
    return EXIT_SUCCESS;
}
