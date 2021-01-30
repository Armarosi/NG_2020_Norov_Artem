#include <iostream>

using namespace std;

void Clearing(char symbols[])
{
    cout << "Enter string: ";
    cin.getline(symbols, 100);
}


void Counter(char symbols[], int words)
{
    for(int i = 0; symbols[i] != 0; i++){

        if ((symbols[i] >= 'A' && symbols[i] <= 'Z') || (symbols[i] >= 'a' && symbols[i] <= 'z')){

            if(!((symbols[i + 1] >= 'A' && symbols[i + 1] <= 'Z') || (symbols[i + 1] >= 'a' && symbols[i + 1] <= 'z'))){
                words++;
            }
        }
    }
}

void Result(int words)
{
    cout << "Result: " << words << endl;
}

int main()
{
    char symbols[100];
    int words = 0;
    Clearing(symbols);
    Counter(symbols, words);
    Result(words);
}
