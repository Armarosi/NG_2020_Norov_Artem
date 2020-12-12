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
    cout << "Rezultat:";
    if ( c == 1 ){
        cout << a+b;
    }

    if ( c == 2 ){
        cout << a-b;
    }

    if ( c == 3 ){
        cout << a*b;
    }

    if ( c == 4 ){
        cout << a/b;
    }
    return 0;
}
