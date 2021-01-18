#include <iostream>
using namespace std;
int main()
{
    int chisla[20];
    for (int i = 0; i<20; i++){
        chisla[i] = 0;
    }
    int i = 0;
    do{
        cout << "Enter number:";
        cin >> chisla[i];
        if (chisla [i] == 0){
            break;
        }
        i++;
    }while(i<20);

    int maxc = chisla[0];
    for (int i = 0; i<20; i++){
        if(chisla[i] > maxc){
            maxc = chisla[i];
        }
    }
    int minc = chisla[0];
    int space = 0;
    for (int i = 0; i<20; i++){
        if(chisla[i] > minc){
            minc = chisla[i];
        }
    }
    for (int i = 0; i<20; i++){

        for (int c = 1; c < maxc - chisla[i]  ; c++)
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
