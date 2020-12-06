#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    cout << "Vvedite chislo:";
    cin >> b;
    while (a < b){
        cout << a << ",";
        ++a;
    }
    cout << b;
}
