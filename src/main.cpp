#include <iostream>

using namespace std;

int main() {
    cout << "PROGRAM DERET FIBONACI" << endl;
    
    int f_n;
    int f_n1;
    int f_n2;
    int n;

    cout << "masukan nilai ke-n: ";
    cin >> n;

    f_n1 = 1;
    f_n2 = 0;
    f_n = f_n1 + f_n2;

    for (int a = 1; a <= n; a++) {
        f_n = f_n1 + f_n2;
        f_n1 = f_n2;
        f_n2 = f_n;
        cout << f_n2 << endl;

    }
    
}
