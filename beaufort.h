#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype> 
#include <algorithm>
using namespace std;

string beaufort(string text, string key) {
    string cipher;
    string alfabeti = "ABCDEFGHIJKLMNOPQRSTUVXYZ";

    for (int i = 0; i < text.size(); i++) {
        char char0 = text[i];
        char char1 = key[i % key.size()];
        int fillo = 0;
        for (int j = 0; j < 26; j++) {
            if (alfabeti[j] == toupper(char0)) {
                fillo = j;
                break;
            }
        }
        int offSet = 0;
        for (int j = fillo; j < fillo + 26; j++) {
            int letter = j % 26;
            if (alfabeti[letter] == toupper(char1)) {
                break;
            }
            offSet++;
        }
        cipher += alfabeti[offSet];

    }
    return cipher;
}

//Shfaqja e tabeles se Beaufort Cipher
void  tabela() {
    string alfabeti = "ABCDEFGHIJKLMNOPQRSTUVXYZ";
    cout << "\n\t\tTabela e Beaufort Cipher\n";
    for (int i = 0; i < alfabeti.size(); i++) {
        cout << "\t";
        for (int j = i; j < i + alfabeti.size(); j++) {
            cout << alfabeti[j % alfabeti.size()] << " ";
        }
        cout << endl;
    }

}


