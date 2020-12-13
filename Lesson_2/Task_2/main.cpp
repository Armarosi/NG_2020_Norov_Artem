#include <iostream>

using namespace std;
int main()
{
    int kartu[10];
    kartu[0] = 0;
    kartu[1] = 0;
    kartu[2] = 0;
    kartu[3] = 0;
    kartu[4] = 0;
    kartu[5] = 0;
    kartu[6] = 0;
    kartu[7] = 0;
    kartu[8] = 0;
    kartu[9] = 0;
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
        allmoney = kartu[0] + kartu[1] + kartu[2] + kartu[3] + kartu[4] + kartu[5] + kartu[6] + kartu[7] + kartu[8] + kartu[9];
        cout << "v summe na vseh kartah " << allmoney << endl;
    }
}
