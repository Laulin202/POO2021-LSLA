#include <iostream>

//using namespace std;
const float IVA = 1.19;

float calcularIVA( float precio ){
   float precioIVA;
   precioIVA = precio / IVA;
   return precioIVA;
} 

int main(){
    float precio;
    printf( "Ingrese precio a calcular:\n");
    std::cin >> precio;
    std::cout << "El precio total es: " << calcularIVA(precio) << "\n"; // \n o endl
    return 0; 
}