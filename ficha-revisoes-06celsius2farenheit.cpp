#include <iostream>

using namespace std;

int main() {
    float C;

    cout << "Da me um valor Celsius para converter para Fahrenheit.\n";
    cin >> C;
    cout << " Sao " << (C * 9/5) +32 << " Fahrenheit.\n";

    return 0;

}

/* C = (5 * (F-32) / 9).*/
