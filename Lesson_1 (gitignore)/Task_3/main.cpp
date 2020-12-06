#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    cout << "Skolko oreshkov nuzhno belochke:";
    cin >> a;
    cout << "Skolko oreshkov v odnoy shishke:";
    cin >> b;
    cout << "Skolko shishek bylo sobrano:";
    cin >> c;
    int f = b*c;
    if ( a < f ) {
        cout << "YES";
    }
    if ( a > f ) {
        cout << "NO";
    }
}
