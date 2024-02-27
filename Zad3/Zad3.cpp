#include <iostream>
#include <math.h>
using namespace std;

class Krztalty {
private:
    const float PI = 3.14;
    int wysokosc;
    int dlugosc_boku_a;
    int dlugosc_boku_b;
    int promien;
    int przekatnaE,przekatnaF;
public:
    Krztalty(int h, int a, int b, int p, int e, int f) {
        this->wysokosc = h;
        this->dlugosc_boku_a = a;
        this->dlugosc_boku_b = b;
        this->promien = p;
        this->przekatnaE = e;
        this->przekatnaF = f;

    }
    void kolo() {
        cout << "Pole kola :";
        cout << this->PI * pow(this->promien, 2) << endl;
}
    void kwadrat() {
        cout << "Pole kwadratu :";
        cout <<(this->dlugosc_boku_a * this->dlugosc_boku_a) << endl;
    }
    void trojkont() {
        cout << "Pole trojkonta :";
        cout << (this->dlugosc_boku_a * this->wysokosc) /2 << endl;
    }
    void romb() {
        cout << "Pole rombu :";
        cout << (this->przekatnaE * this->przekatnaF)/2 << endl;
    }
};
int main()
{
    setlocale(LC_ALL, "");
    int a, b, h, p, e, f;
    cout << "Podaj bok a : "; cin >> a;
    cout << "Podaj bok b : "; cin >> b;
    cout << "Podaj wysokosc : "; cin >> h;
    cout << "Podaj promien : "; cin >> p;
    cout << "Podaj przekatna E : "; cin >> e;
    cout << "Podaj przekatna F : "; cin >> f; cout << endl;
    Krztalty nr1(a, b, h, p, e, f);
    nr1.kolo();
    nr1.kwadrat();
    nr1.trojkont();
    nr1.romb();
    return EXIT_SUCCESS;
}