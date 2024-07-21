#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    cin >> s;

    for(int i = 0; i < 4; i++)
        cout << s[i];
    for(int i = 9; i < 13; i++)
        cout << s[i];
    for(int i = 3; i < 8; i++)
        cout << s[i];
    return 0;
}