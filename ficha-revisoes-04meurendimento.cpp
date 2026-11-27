#include <iostream>

using namespace std;

int main() {
    int dinheiro,horas;

    cout << "Quanto ganhas por hora ? ";
    cin >> dinheiro;
    cout << "Quantas horas trabalhas por mes ? ";
    cin >> horas;

    cout << " Recebi " << (dinheiro*horas) << " $ neste mes. \n";
    cout << " Ganho " << ((dinheiro*horas)*12) << " $ por ano. ";

    return 0;

}
