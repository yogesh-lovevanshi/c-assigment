#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a = 0, b = 1;
    cout << "Fibonacci: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        int c = a + b; 
        a = b;
         b = c;
    }
    return 0;
}
