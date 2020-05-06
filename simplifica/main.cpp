#include <iostream>
#include <vector>
#include <bits/stdc++.h>


using namespace std;

struct elemento {
    std::string name;
    bool isProp;
    bool isOp;
    bool isMul;
};


string quitarEspacios(string logica){
    std::string traducido;
    for(int i=0; logica[i]!=0;i++){
        if(logica[i] != 32){
            traducido.append(1,logica[i]);
        }
    }
    return traducido;
};

std::vector<elemento> parsear(const std::vector<string> &arreglo){
    std::vector<elemento> f_array;
    std::string problema;
    problema = arreglo[0];
    int cont = 0;
    std::string valor ="";
    for(int i=0; i<problema.length();i++){
        // Se utiliza el índice de manera un poco más dinámica. En varios lugares del código se agrega valor a la variable i
        if(problema[i]!='=' && problema[i]!='&' && problema[i]!='|'){
            // Sector de proposiciones
            if(problema[i]=='('){
                int cantidad = 0;
                for(int j=i; j<problema.length();j++){
                    if(problema[j]==')'){
                        cantidad++;
                    }
                    valor.push_back(problema[j]);
                }
                // Se le agregan la cantidad de casillas avanzadas dentro del paréntesis
                i += cantidad;
            }else{
                valor.push_back(problema[i]);
            }

        }else{
            // Se almacena la proposición antes del operador.
            f_array.push_back(elemento());
            f_array[cont].name = valor;
            f_array[cont].isProp = true;
            f_array[cont].isOp = false;
            f_array[cont].isMul = false;         
            // Cambiarle nuevamente el valor al contador del arreglo y al valor.
            cont++;
            valor = "";

            // Sector de operandos
            if(problema[i]=='='){
                // Agregar el operando
                f_array.push_back(elemento());
                f_array[cont].name = "=>";
                f_array[cont].isProp = false;
                f_array[cont].isOp = true;
                f_array[cont].isMul = false;
                cont++;
                i++;
            }else{
                // Agregar el operando
                f_array.push_back(elemento());
                f_array[cont].name = problema[i]+problema[i];
                f_array[cont].isProp = false;
                f_array[cont].isOp = true;
                f_array[cont].isMul = false;
                cont++;
                i++;
            }
        }
    }

    f_array.pop_back();
    return f_array;
};

/*
La idea principal es que ahora que están parseados, se pueda ver qué axiomas se pueden usar en cada caso. También encontré que tener isMul
(Si hay multiples operaciones dentro) ayuda para hacer los limites de cuándo detener los bucles. Se me hace la idea.
*/


int main(int argc, char **argv)
{
    std::vector <elemento> propList;
    std::vector <string> problema (argc);
    cout << "~~~ Simplificacion de proposiciones ~~~" << endl;
    problema[0] = quitarEspacios(argv[1]);
    propList = parsear(problema);
    for(int i=0; i<propList.size();i++){
        std::cout << "El dato numero " <<i<<" es "<<propList[i].name<< std::endl;
    }
    std::string valor;
    return 0;
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

