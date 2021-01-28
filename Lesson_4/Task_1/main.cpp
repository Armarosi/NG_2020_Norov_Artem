#include <iostream>

using namespace std;

void Fillkartu0(int kartu[10])
{
    for(int i = 0; i < 10; i++){
        kartu[i] = 0;
    }
}

void MakingBalance(int kartu[10])
{
    int nomer, money;
    cout << "vvedi nomer kartochki:";
    cin >> nomer;
    cout << "skolko polozhit?";
    cin >> money;
    kartu[nomer] += money;
}
void ShowBalanceCards(int kartu[10])
{
    cout << "v summe na vseh kartah" << endl;
    for(int i = 0; i < 10; i++){
        cout << kartu[i] << " ";
    }
}

void ShowAllBalance(int kartu[10])
{
    int allmoney = 0;
    for (int i = 0; i < 10; i++)
        allmoney += kartu[i];
    cout << endl << "Money on all cards is " << allmoney << endl;
}

void ShowFinalBalance(int kartu[10])
{
    ShowBalanceCards(kartu);
    ShowAllBalance(kartu);
}

void Cycle(int kartu[10])
{
    for ( ; ; ){
        MakingBalance(kartu);
        ShowFinalBalance(kartu);
    }
}

int main()
{
    int kartu[10];
    Fillkartu0(kartu);
    Cycle(kartu);
}
