#include <iostream>
using namespace std;

struct Student {
    string name, rollNo;
    int marks;
};

int main() {
    Student s;
    cin >> s.name >> s.rollNo >> s.marks;
    cout << s.name << " " << s.rollNo << " " << s.marks;
    return 0;
}
