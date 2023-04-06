#include<iostream>
#include "beaufort.h"
using namespace std;


int main() {
    string text, key, out;
    int komanda;

    cout << "\n\nProgrami per enkriptimin dhe dekriptimin e tekstit permes Beaufort Cipher!" << endl;
    tabela();

fillimi:
    cout << "\n\t\tMeny: " << endl;
    cout << "\tShtypni 1 per enkriptim " << endl;
    cout << "\tShtypni 2 per dekriptim " << endl;
    cout << "\t";
    cin >> komanda;

    switch (komanda) {
    case 1:
        cout << "\tJepni plaintext-in : ";
        cin >> text;

        while (!all_of(text.begin(), text.end(), [](unsigned char c) { return isalpha(c); })) {
            cout << "\tPlaintext-i duhet te permbaje vetem shkronja. Shkruani perseri: ";
            cin >> text;
        }
        cout << "\tJepni celesin per enkriptim : ";
        cin >> key;

        while (!all_of(key.begin(), key.end(), [](unsigned char c) { return isalpha(c); })) {
            cout << "\tCelesi duhet te permbaje vetem shkronja. Shkruani perseri: ";
            cin >> key;
        }
        out = beaufort(text, key);
        cout << "\n\tCiphertext-i : " << out << "\n";
        break;
    case 2:
        cout << "\tJepni Ciphertext-in : ";
        cin >> text;

        while (!all_of(text.begin(), text.end(), [](unsigned char c) { return isalpha(c); })) {
            cout << "\tCiphertext-i duhet te permbaje vetem shkronja. Shkruani perseri: ";
            cin >> text;
        }
        cout << "\tJepni Celesin per dekriptim: ";
        cin >> key;

        while (!all_of(key.begin(), key.end(), [](unsigned char c) { return isalpha(c); })) {
            cout << "\tCelesi duhet te permbaje vetem shkronja. Shkruani perseri: ";
            cin >> key;
        }
        out = beaufort(text, key);
        cout << "\n\tPlaintext-i: " << out << "\n";
        break;
    default:
        cout << "\tKeni shenuar komande te gabuar!";
        break;
    }
    
    return 0;
}