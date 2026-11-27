#include <iostream>

using namespace std;

int main() {
    float peso,acg,massa;

   cout << "Massa de um corpo:\n";
   cout << "Da-me o peso:\n";
   cin >> peso;
   cout << "Da-me a Aceleraçao da Gravidade:\n";
   cin >> acg;
   massa = peso/acg;
   cout << "A massa e " << massa;


 return 0;

    }
