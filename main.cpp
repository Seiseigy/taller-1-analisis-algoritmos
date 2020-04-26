#include <iostream>

using namespace std;

void participantes();

int main(int argc, char** argv){
    cout << "Chao, mundo"<< endl;
    if(argc > 1){
        cout << argv[1] << endl;
    }
    else{
        participantes();
    }
    
    return EXIT_SUCCESS;
}

void participantes() {
    std::cout << std::endl << "=== Taller 01 ===" << std::endl;
    std::cout << std::endl << "Sebastian Albornoz"; // Reemplazar por su nombre
    std::cout << std::endl << "Sebastian Santelices"; // Reemplazar por su nombre
    std::cout << std::endl << "Jorge Verdugo" << std::endl; // Reemplazar por su nombre
}