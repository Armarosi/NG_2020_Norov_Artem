#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    cout << "Enter size of the christmas tree:";
    cin >> a;
    for (b = 0; b < a; b++)
    {
        for (c = 1; c < a - b; c++)
            cout << " ";
        for (c = 0; c < b * 2 + 1; c++)
            cout << "*";
        cout << endl;
    }

    for (c = 1; c < a; c++)
        cout << " ";
    cout << "*";
}

