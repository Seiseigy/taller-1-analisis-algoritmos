#include <iostream>
#include <map>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void participantes();

<<<<<<< HEAD
bool validarSimbolos(char caracter, char lenguaje[])
{
    for (size_t i = 0; i < strlen(lenguaje); i++)
    {
        if (caracter == lenguaje[i])
        {
            return true;
        }
    }
};

int main(int argc, char **argv)
{
    cout << "Chao, mundo" << endl;
    char lenguaje[4] = {'a', 'b', 'c', '*'};

    if (argc > 1)
    {
        string copia = argv[1];
        if (copia[0] != 'a')
        {
            cout << "Palabra no valida, no comienza con la letra a" << endl;
            return 99;
        }
        else
        {
            for (size_t i = 0; i < copia.length(); i++)
            {
                if (!validarSimbolos(copia[i], lenguaje))
                {
                    cout << "Caracter " << copia[i] << " NO pertenece al lenguaje" << endl;
                    return 99;
                }
                else if (copia[i] == '*')
                {
                    cout << "Palabra no valida, contiene el caracter *" << endl;
                    //verificar que las letras correspondan al lenguaje
                    return 99;
                }
            }
            cout << "Palabra valida"<< endl;
            return EXIT_SUCCESS;
        }
    }
    else
    {
        participantes();
        return EXIT_SUCCESS;
    }
};

void participantes()
{
    std::cout << std::endl
              << "=== Taller 01 ===" << std::endl;
    std::cout << std::endl
              << "Sebastian Albornoz"; // Reemplazar por su nombre
    std::cout << std::endl
              << "Sebastian Santelices"; // Reemplazar por su nombre
    std::cout << std::endl
              << "Jorge Verdugo" << std::endl; // Reemplazar por su nombre
};
=======
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
>>>>>>> bb28dd439bfccccfbf63bbb5d3d84640def15b53
