#include <iostream>

using namespace std;
const float IVA = 1.19;

int calcularIVA( int precio ){
   int precioIVA;
   precioIVA = precio / IVA;
   return precioIVA;
} 

int main( ){
    int precio;
    printf( "Ingrese precio a calcular:\n");
    cin >> precio;
    cout << "El precio total es: uwu " << calcularIVA(precio) << endl;
    return 0; 
}