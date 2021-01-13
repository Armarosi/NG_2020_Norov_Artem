#include <iostream>

using namespace std;

int main()
{
    int words = 0;
    char symbols[100];
    cout << "Enter string: ";
    cin.getline(symbols, 100);
    for(int i = 0; symbols[i] != 0; i++){
            if ((symbols[i] >= 'A' && symbols[i] <= 'Z') || (symbols[i] >= 'a' && symbols[i] <= 'z')){
                words++;
            }
            if(!((symbols[i] >= 'A' && symbols[i] <= 'Z') || (symbols[i] >= 'a' && symbols[i] <= 'z')) && words > 0){
                words++;
                words = 0;
            }
        }
    if(words > 0){
        words++;
    }
    cout << "Result: " << words << endl;
}
