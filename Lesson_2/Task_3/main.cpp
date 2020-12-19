#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int chisla[20];

    for (int i = 0; i<20; i++){
        cout << "Enter number:";
        cin >> chisla[i];
        if (getch() !=0){
            break;
        }
    }
}
