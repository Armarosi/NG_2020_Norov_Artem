#include <iostream>

using namespace std;

int main()
{
    int shkolu[1000];
    int myschool = 0;
    int number = 0;
    for (int i=0; i<1000; i++){
        cout << "vvedi nomer shkoli:";
        cin >> shkolu[i];
    }
    cout << "a teper vvedi svoyu shkolu:";
    cin >> myschool;
    for (int i=0; i<1000; i++){
        if(shkolu[i] == myschool){
            number++;
        }
    }
    if (number > 0){
        cout << "ya znayu etu shkolu!";
    }else cout << "ya ne znayu etu shkolu!";
}
