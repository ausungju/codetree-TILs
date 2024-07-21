#include <iostream>
using namespace std;

int main() {
    int a = 5, b= 6, c = 7;
    int temp_b = b, temp_c = c;

    b = a;
    c = temp_b;
    a = temp_c;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}