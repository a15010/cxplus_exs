#include <iostream>

using namespace std;

int main() {
    float z,a,b,c,x,y;

    cout << "Diz me um numero inteiro:\n";
    cin >> x;
    cout << "Diz me outro numero inteiro:\n";
    cin >> y;
    cout << "Diz me um numero real:\n";
    cin >> z;

    a = (y*2) * (x*0.5);
    b = (3*z + x);
    c = (z*z*z);
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;


    return 0;

}
