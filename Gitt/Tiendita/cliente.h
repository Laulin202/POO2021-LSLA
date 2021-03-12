#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <list>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::list;

//CLASE CLIENTE

class Cliente{
    private:
        string nombre;
        string email;
        int id;
        int cantLitrosTomados;
        string telefono;
    public:
        Cliente();
        Cliente(string, string, int, int, string);
        void mostrarCliente();
        int getId();
};


#endif