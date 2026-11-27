#include <iostream>

using namespace std;

int main() {
    float F;

    cout << "Da me um valor farenheit para converter para celsius.\n";
    cin >> F;
    cout << " Sao " << (5 * (F-32)/ 9) << " Celsius.\n";

    return 0;

}

/* C = (5 * (F-32) / 9).*/
