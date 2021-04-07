#ifndef INMOBILIARIA_H
#define INMOBILIARIA_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#include "propiedad.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
//PENDIENTE
using std::ofstream;
using std::ios;
using std::ifstream;

class Inmobiliaria{
    private:
        string nombre;
        vector< Propiedad> listaPropiedades;
    public:
        Inmobiliaria();
        void crearPropiedad();
};


#endif