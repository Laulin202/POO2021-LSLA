#include <iostream>
#include <fstream>
#include <stdlib.h>

#define CAP 10

int cont = 0;

using namespace std;

typedef struct contacto contacto;

struct contacto{
    char nombre[10];
    char apellido[20];
    int tel;
};

contacto generarContacto(){
    contacto p;

    cout << "Digite nombre:" << endl;
    cin >> p.nombre;

    cout << "Digite apellido:" << endl;
    cin >> p.apellido;

    cout << "Digite tel:" << endl;
    cin >> p.tel;

    return p;
}

void mostrarContactos( contacto * listaContactos ){
    for( int i = 0; i < cont; i++){
        cout << "Contacto " << i + 1 << endl;
        cout << "Nombre: " << listaContactos[i].nombre << endl;
        cout << "Apellido: " << listaContactos[i].apellido << endl;
        cout << "Telefono: " << listaContactos[i].tel << endl;

    }

}

void generarArchivo( contacto * listaContactos ){

    ofstream archivo;
    archivo.open("prueba.txt", ios::out);

    if(archivo.fail()){
        cout << "No se pudo abrir el archivo" << endl;
        exit(1);
    }

    for( int i = 0; i < cont; i++){
        archivo << "===================" << endl;
        archivo << "Contacto " << i+1 << endl;
        archivo << "Nombre: " << listaContactos[ i ].nombre << endl;
        archivo << "Apellido: " << listaContactos[ i ].apellido << endl;
        archivo << "Telefono: " << listaContactos[ i ].tel << endl;

    }

    archivo.close();


}

void menu(){
    int op;
    contacto listaContactos[CAP];

    do
    {  
        cout << "1. Crear contacto" << endl;
        cout << "2. Agregar mas contactos" << endl;
        cout << "3. visualizar contactos" << endl;
        cout << "4. generar erchivo.txt" << endl;

        cout << "Digite su opcion:" << endl;
        cin.clear();
        cin >> op;

        switch (op){

            case 1:

                listaContactos[cont++] = generarContacto();
                
                break;

            case 2:

                listaContactos[cont++] = generarContacto();
                
                break;

            case 3:

                mostrarContactos( listaContactos );
                
                break;

            case 4:

                generarArchivo( listaContactos );
                
                break;

            default:
                break;
        }

    
    } while (op);
    
}


int main(){

    menu();

    return 0;
}