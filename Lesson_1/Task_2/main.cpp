#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    cout << "Vvedite pervoe chislo:" ;
    cin >> a;
    cout << "Vvedite vtoroe chislo:" ;
    cin >> b;
    cout << "Vvedite deistvie:" ;
    cin >> c;

    if ( c == 1 ){
        cout << "Rezultat:";
        cout << a+b;
    }

    if ( c == 2 ){
        cout << "Rezultat:";
        cout << a-b;
    }

    if ( c == 3 ){
        cout << "Rezultat:";
        cout << a*b;
    }

    if ( c == 4 ){
        cout << "Rezultat:";
        cout << a/b;
    }
    return 0;
}
