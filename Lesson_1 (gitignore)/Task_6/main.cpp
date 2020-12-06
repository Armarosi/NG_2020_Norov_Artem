#include <iostream>

using namespace std;

int main()
{
    int a=0;
    cout << "Enter size:";
    cin >> a;
    for(int b = 0; b < a; b++){
        for(int c = 0; c < a; c++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for (int b = 0; b < a; b++){
        cout << "*";
        for (int c = 0; c < b; c++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for(int b = 0; b < a; b++){
        for(int c = a; c>b+1; c--){
            cout << " ";
        }
        for(int c= 0;c<= b; ++c){
            cout << "*";
        }
        cout<<endl;
     }
     cout << endl;

    for(int b = 0; b < a; b++){
        for(int c = a; c > b; c--){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for (int b = a; b >= 0; b--) {
        for(int c = 0; c < a - b; c++ ) {
            cout << " ";
        }
        for(int c = 0; c < b; c++){
            cout << "*";
        }
        cout << endl;
    }
}

























