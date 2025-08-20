#include <iostream>
using namespace std;

int main() {
    int marks[5], total = 0;
    for (int i = 0; i < 5; i++) 
    cin >> marks[i],
     total += marks[i];
    int avg = total / 5;
    if (avg >= 90)
     cout << "Ex";
    else if (avg >= 80)
     cout << "A";
    else if (avg >= 70)
     cout << "B";
    else if (avg >= 60) 
    cout << "C";
    else cout << "F";
    return 0;
}
