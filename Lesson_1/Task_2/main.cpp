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
    if (deistvie < 5 && deistvie > 0){
            cout << "Rezultat:";
            switch( deistvie ){
                case 1:
                    cout << chislo1+chislo2;
                    break;
                case 2:
                    cout << chislo1-chislo2;
                    break;
                case 3:
                    cout << chislo1*chislo2;
                    break;
                case 4:
                    cout << chislo1/chislo2;
                    break;
            }
        }
    return 0;
}
