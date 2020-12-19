#include <iostream>

using namespace std;

int main()
{
    int shkolu[10];
    int myschool = 0;
    for (int i=0; i<10; i++){
        cout << "vvedi nomer shkoli:";
        cin >> shkolu[i];
    }
    cout << "a teper vvedi svoyu shkolu:";
    cin >> myschool;
    for (int i=0; i<10; i++){
        if (myschool == shkolu[i]){
            cout << "ya znayu etu shkolu!";
            break;
        }
    }
    return (0);
}

