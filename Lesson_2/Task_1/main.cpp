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
    if (myschool == shkolu[0] || myschool == shkolu[1] || myschool == shkolu[2] || myschool == shkolu[3] || myschool == shkolu[4] || myschool == shkolu[5] || myschool == shkolu[6] || myschool == shkolu[7] || myschool == shkolu[8] || myschool == shkolu[9]){
            cout << "ya znayu etu shkolu!";
    }else cout << "ya ne znayu etu shkolu!";
}

