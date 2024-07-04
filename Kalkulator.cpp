#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;

// Funkcja do wykonania operacji na dwóch liczbach
double wykonajOperacje(double liczba1, double liczba2, char operacja) {
    switch (operacja) {
        case '+':
            return liczba1 + liczba2;
        case '-':
            return liczba1 - liczba2;
        case '*':
            return liczba1 * liczba2;
        case '/':
            if (liczba2 != 0)
                return liczba1 / liczba2;
            else {
                cerr << "Błąd: Nie można dzielić przez zero!" << endl;
                return NAN; // NAN oznacza "Not a Number"
            }
        default:
            cerr << "Błąd: Nieznany operator!" << endl;
            return NAN; // NAN oznacza "Not a Number"
    }
}

int main() {
    cout << "Prosty kalkulator" << endl;
    cout << "-----------------" << endl;

    double liczba1, liczba2;
    char operacja;

    cout << "Podaj pierwszą liczbę: ";
    cin >> liczba1;

    cout << "Podaj operator (+, -, *, /): ";
    cin >> operacja;

    cout << "Podaj drugą liczbę: ";
    cin >> liczba2;

    double wynik = wykonajOperacje(liczba1, liczba2, operacja);
    if (!isnan(wynik)) {
        cout << "Wynik: " << fixed << setprecision(2) << wynik << endl;
    }

    cout << "\nNaciśnij dowolny klawisz, aby zamknąć aplikację..." << endl;
    cin.ignore(); // Ignorowanie zbędnego Enter po wprowadzeniu liczby
    cin.get(); // Czekanie na dowolny klawisz przed zamknięciem aplikacji

    return 0;
}
