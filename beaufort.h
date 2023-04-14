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
void tabela() {
    cout << "\n\t\tTabela e Beaufort Cipher\n";
    cout << "\n\t    A B C D E F G H I J K L M N O P Q R S T U V W X Y Z\n";
    cout << "\t  ---------------------------------------------------\n";
    string alfabeti = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
    int length = alfabeti.length();

    for (int i = length - 1; i >= 0; i--) {
        cout << "\t"<<alfabeti[i]<<" | ";
        for (int j = i; j < length; j++) {
            cout << alfabeti[j]<<" ";
        }
        for (int k = 0; k < i; k++) {
            cout << alfabeti[k] <<" ";
        }
        cout << endl;
    }
}