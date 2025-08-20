#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch; cin >> ch;
    if (isupper(ch)) 
    cout << "Uppercase";
    else if (islower(ch))
     cout << "Lowercase";
    else if (isdigit(ch)) 
    cout << "Digit";
    else cout << "Other character";
    return 0;
}
