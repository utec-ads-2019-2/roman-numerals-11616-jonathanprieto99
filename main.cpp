#include <iostream>
#include <vector>
#include <map>

using namespace std;

int size = 13;
vector <string> romanos = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
vector<int> arabicos = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};

int main() {
    map<string, string> lista;
    for (int i = 1; i < 4000; i++) {
        int itactual = i;
        string resultadoromano;
        for (int j = romanos.size() - 1; j >= 0 and itactual; --j) {

            while (itactual >= arabicos[j]) {
                resultadoromano = resultadoromano + romanos[j];
                itactual = itactual - arabicos[j];
            }

        }
        char input[99];
        sprintf (input, "%d", i);
        lista[input] = resultadoromano;
        lista[resultadoromano] = input;

    }

    char input[99];

    while (cin>>input) {
        cout<<lista[input]<<endl;
    }
    return 0;
}



