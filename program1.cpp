#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    int probelov = 0;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') { probelov++; }
    }

    if (probelov == 0) {
        cout << 0;
        return 0;
    }

    int nado_probelov = probelov - 1;

    int pozicia_probela = 0;
    int count = 0;

    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            count++;
            if (count == nado_probelov) {
                pozicia_probela = i;
                break;
            }
        }
    }

    char bukva = text[pozicia_probela + 1];

    int otvet = 0;
    for (int i = 0; i < text.length(); i++) {
        if (i == 0 || text[i - 1] == ' ') {
            if (text[i] == bukva) {
                otvet++;
            }
        }
    }

    cout << otvet;
    return 0;
}

