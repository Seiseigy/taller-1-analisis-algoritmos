#include <iostream>

using namespace std;

void participantes();

int main(int argc, char** argv) {
    cout << "Chao, mundo" << endl;
    if (argc > 1) {
        cout << argv[1] << endl;
    } else {
        participantes();
    }

    return EXIT_SUCCESS;
}

void participantes() {
    cout << endl
         << "=== Taller 01 ===" << endl;
    cout << endl
         << "Sebastian Albornoz";
    cout << endl
         << "Sebastian Santelices";
    cout << endl
         << "Jorge Verdugo" << endl;
}