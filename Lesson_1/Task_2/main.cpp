#include <iostream>

using namespace std;

int main()
{
    int chislo1 = 0;
    int chislo2 = 0;
    int deistvie = 0;
    cout << "Vvedite pervoe chislo:" ;
    cin >> chislo1;
    cout << "Vvedite vtoroe chislo:" ;
    cin >> chislo2;
    cout << "Vvedite deistvie:" ;
    cin >> deistvie;
            switch( deistvie ){
                case 1:
                    cout << "Rezultat:";
                    cout << chislo1+chislo2;
                    break;
                case 2:
                    cout << "Rezultat:";
                    cout << chislo1-chislo2;
                    break;
                case 3:
                    cout << "Rezultat:";
                    cout << chislo1*chislo2;
                    break;
                case 4:
                    cout << "Rezultat:";
                    cout << chislo1/chislo2;
                    break;
            }
    return 0;
}
