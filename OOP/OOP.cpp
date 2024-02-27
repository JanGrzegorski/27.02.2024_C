#include <iostream>
using namespace std;

class Samochody {
private:
    string marka;
    string kolor;
    int pojemnosc;
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
    void prezentacjaSamochodu() {
        cout << "Marka: " << this->marka << "\n";
        cout << "Kolor: " << this->kolor << "\n";
        cout << "Pojemność: " << this->pojemnosc << "\n";
        cout << "Cena: " << this->cena << "\n";
        cout << "Przebieg: " << this->przebieg << "\n";
        cout << "----------------------------------------------" << endl;
    }
};

int main()
{
    Samochody fiat = Samochody("FIAT", "Zielony", 2.0, 250.123456786543, 180);
    fiat.prezentacjaSamochodu();

    Samochody Skoda = Samochody("Skoda", "Niebieski", 1.4, 220.123456786543, 400);
    Skoda.prezentacjaSamochodu();

    Samochody BMW = Samochody("BMW", "Czarny", 4.2, 531.12345678654, 100);
    BMW.prezentacjaSamochodu();

    return EXIT_SUCCESS;
}
