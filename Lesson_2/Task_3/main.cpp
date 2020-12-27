#include <iostream>

using namespace std;

int main()
{
    int chisla[20];
    for (int i = 0; i<20; i++){
        chisla[i] = 0;
    }
    for (int i = 0; i<20; i++){
        cout << "Enter number:";
        cin >> chisla[i];
        if (chisla [i] == 0){
            break;
        }
    }
    int maxc = chisla[0];
    for (int i = 0; i<20; i++){
        if(chisla[i] > maxc){
            maxc = chisla[i];
        }
    }
    int space = 0;
    for (int i = 0; i<20; i++){
        space = (maxc - chisla[i])/2;
        while (space>0){
            cout << " ";
            space--;
        }
        for (int n = 0; n < chisla[i]; n++)
            cout << "*";
        cout << endl;
    }
}

