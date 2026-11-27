#include <iostream>
#include <time.h>

using namespace std;

time_t now = time(NULL);
struct tm *t = localtime(&now);

void menu() {
    cout << "Menu:\n";
    cout << "1 - Mostrar ano\n";
    cout << "2 - Sair do programa\n";
    cout << "Escolha: ";
}

int getAno() {
    return 2026;
}

int getMes() {
    return 10;
}

int getDia() {
    return 27;
}

int aMinhaIdade(int anoNascimento, int mesNascimento, int diaNascimento){
    int idade=getAno() - anoNascimento;

    if (getMes() < mesNascimento) {
        idade --;
    } else {
        if (getDia() < diaNascimento && getMes() == mesNascimento) {
            idade --;
        }
    }
    return idade;
}

int main() {
    int escolha,ano;


    cout << "a minha idade = " << aMinhaIdade(2011, 10, 27) << " anos\n";

    do {
        menu();
        cin >> escolha;

        if (escolha == 1) {
            ano = getAno();
            cout << ano;
            cout << "\n";
        }
        } while (escolha != 2);



    return 0;

}
