#include <iostream>
//using namespace std;

typedef struct persona persona;


struct persona
{
    int edad;
    char sexo;
    float altura;
};

persona generarPersona(){
    persona p;

    std::cout << "Digite la edad:" <<endl;
    std::cin >> p.edad;

    std::cout << "Digite el sexo:" <<endl;
    std::cin >> p.sexo;

    std::cout << "Digite la altura:" <<endl;
    std::cin >> p.altura;

    return p;
}

int main(){
    
    persona p;

    p = generarPersona();

    std::cout << " Edad:" << p.edad << endl;
    std::cout << " Altura:" << p.altura << endl;
    std::cout << " sexo:" << p.sexo << endl;

}