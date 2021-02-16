#include <iostream>
using namespace std;

typedef struct persona persona;


struct persona
{
    int edad;
    char sexo;
    float altura;
};

persona generarPersona(){
    persona p;

    cout << "Digite la edad:" <<endl;
    cin >> p.edad;

    cout << "Digite el sexo:" <<endl;
    cin >> p.sexo;

    cout << "Digite la altura:" <<endl;
    cin >> p.altura;

    return p;
}

int main(){
    
    persona p;

    p = generarPersona();

    cout << " Edad:" << p.edad << endl;
    cout << " Altura:" << p.altura << endl;
    cout << " sexo:" << p.sexo << endl;

}