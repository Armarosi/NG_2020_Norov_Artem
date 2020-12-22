#include <iostream>

using namespace std;
int main()
{
    int kartu[10];
    for (int i = 0; i<10; i++){
        kartu[i]=0;
    }
    int nomer = 0;
    int money = 0;
    int allmoney = 0;
    for ( ; ; ){
        cout << "vvedi nomer kartochki:";
        cin >> nomer;
        cout << "skolko polozhit?";
        cin >> money;
        for (int i = 0; i<10; i++){
            cout << kartu[i] << " ";
        }
        kartu[nomer] = kartu[nomer] + money;
        cout << kartu[nomer] << endl;
        for (int i = 0; i<10; i++){
            allmoney += kartu[i];
        }
        cout << "v summe na vseh kartah " << allmoney << endl;
        allmoney = 0;
    }
}
