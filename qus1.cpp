#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Provide numbers as command line arguments\n";
        return 0;
    }
    int maxVal = atoi(argv[1]);
    for (int i = 2; i < argc; i++)
        if (atoi(argv[i]) > maxVal) maxVal = atoi(argv[i]);
    cout << "Maximum = " << maxVal << endl;
    return 0;
}
