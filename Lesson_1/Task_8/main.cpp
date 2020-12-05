#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    cout << "Enter size of the christmas tree:";
    cin >> a;
    for (int b = 0; b < a; b++)
    {
        for (int c = 1; c < a - b; c++)
            cout << " ";
        for (int c = a - 2*b; c <= a; c++)
            cout << "*";
        cout << endl;
        //цикл для пробелов
    }

}

