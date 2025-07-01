#include <iostream>
using namespace std;

float media(float a, float b, float c) {
    return (a + b + c) / 3;
}

int main() {
    string nome[2];
    float n1[2], n2[2], n3[2], m[2];
    int i, maior = 0;

    for (i = 0; i < 2; i++) {
        cout << "Nome do aluno: ";
        cin >> nome[i];

        cout << "Digite 3 notas: ";
        cin >> n1[i] >> n2[i] >> n3[i];

        m[i] = media(n1[i], n2[i], n3[i]);

        if (m[i] > m[maior]) {
            maior = i;
        }
    }

    cout << "\nALUNO\tN1\tN2\tN3\tMEDIA\tSIT\n";
    for (i = 0; i < 2; i++) {
        cout << nome[i] << "\t" << n1[i] << "\t" << n2[i] << "\t" << n3[i] << "\t" << m[i];

        if (m[i] >= 7)
            cout << "\tAprovado";
        else
            cout << "\tReprovado";

        cout << endl;
    }

    cout << "\nMaior media: " << nome[maior] << " (" << m[maior] << ")\n";

    return 0;
}