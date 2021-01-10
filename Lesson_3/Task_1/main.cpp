#include <iostream>

using namespace std;

int main()
{
    int words = 0;
    int counter = 0;
    char symbols[100];
    cout << "Enter string: ";
    cin.getline(symbols, 100);
    for(int i = 0; symbols[i] != 0; i++){
            if ((symbols[i] >= 'A' && symbols[i] <= 'Z') || (symbols[i] >= 'a' && symbols[i] <= 'z')){
                counter++;
            }
            if(!((symbols[i] >= 'A' && symbols[i] <= 'Z') || (symbols[i] >= 'a' && symbols[i] <= 'z')) && counter > 0){
                words++;
                counter = 0;
            }
        }
    if(counter > 0){
        words++;
    }
    cout << "Result: " << words << endl;
}
