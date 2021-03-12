#include "cliente.h"

//CONSTRUCTORES CLIENTE

Cliente::Cliente(){}

Cliente::Cliente(string nombre, string email, int id, int cantLitrosTomados, string telefono){
    this->nombre = nombre;
    this->email = email;
    this->id = id;
    this->cantLitrosTomados = cantLitrosTomados;
    this->telefono = telefono;
}

//METODOS CLIENTE

int Cliente::getId(){
    return this->id;
}

void Cliente::mostrarCliente(){

    cout << "|===============================|" << endl;
    cout << " Nombre: "<< this->nombre << endl;
    cout << " email: "<< this->email << endl;
    cout << " Id: "<< this->id << endl;
    cout << " Cantida Litros: "<< this->cantLitrosTomados << endl;
    cout << " telefono: "<< this->telefono << endl;

}