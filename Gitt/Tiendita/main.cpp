#include <iostream>
#include <list>
#include <string>

using namespace std;


//Declaraciones


// CLASE PRODUCTO 

class Producto{
    private:
        string marca;
        string tipoProducto;
        int codigoProducto;
        int existencia;
        float valorProducto;
    public:
        Producto();
        Producto( string, string, int, int, float);
        void mostrarProducto();
};

//CONSTRUCTORES PRODUCTO

Producto::Producto(){}

//este constructor es para crear cada producto y añadirlo a la lista
Producto::Producto( string marca, string tipoProducto, int codigo, int exs, float valorProducto){
    this->marca = marca;
    this->tipoProducto = tipoProducto;
    this->codigoProducto = codigo ;
    this->existencia = exs ;
    this->valorProducto = valorProducto;

}

//METODOS PRODUCTO

void Producto::mostrarProducto(){

    cout << "==================" << endl;
    cout << "Marca: "<< this->marca << endl;
    cout << "Tipo: "<< this->tipoProducto << endl;
    cout << "Codigo: "<< this->codigoProducto << endl;
    cout << "Existencia: "<< this->existencia << endl;
    cout << "Valor producto: "<< this->valorProducto << "$" << endl;

}

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
};

//CONSTRUCTORES CLIENTE

Cliente::Cliente(string nombre, string email, int id, int cantLitrosTomados, string telefono){
    this->nombre = nombre;
    this->email = email;
    this->id = id;
    this->cantLitrosTomados = cantLitrosTomados;
    this->telefono = telefono;
}

//METODOS CLIENTE

void Cliente::mostrarCliente(){

    cout << "|===============================|" << endl;
    cout << " Nombre: "<< this->nombre << endl;
    cout << " email: "<< this->email << endl;
    cout << " Id: "<< this->id << endl;
    cout << " Cantida Litros: "<< this->cantLitrosTomados << endl;
    cout << " telefono: "<< this->telefono << endl;

}


//CLASE TIENDA 

class Tienda{
    private:
        string nombre;
        string nombreDueno;
        int capClient;
        int capProducto;
        list<Producto> listaProductos; //list<Clase> nombre_de_lista
        list<Cliente> listaCliente;
    public:
        Tienda();
        void mostrarTodosProducto();
        void mostrarTodosCliente();
        void agregarProducto();

};

//CONSTRCUTORES TIENDA

Tienda::Tienda(){
    this->nombre = "La Farra";
    this->nombreDueno = "Laura";
    this->capClient = 10;
    this->capProducto = 20;
}

//METODOS TIENDA

void Tienda::mostrarTodosProducto(){
    
//  list<Clase_a_recorrer>:: iterator nombre_iterador = nombre_lista_de_Clase.begin(); it != nombre_lista_de_Clase.end(); i++; 

    for(list<Producto>::iterator it = listaProductos.begin(); it != listaProductos.end(); it++){
        it->mostrarProducto();
    }

}


void Tienda::mostrarTodosCliente(){

    for(list<Cliente>::iterator it = listaCliente.begin(); it != listaCliente.end(); it++){
        it->mostrarCliente();
    }
}

void Tienda::agregarProducto(){
    string marca, tipoProducto;
    int codigo, existencia;
    float valorProducto;

    cout << "Digite marca: " << endl;
    cin >> marca;

    cout << "Digite tipo del producto: " << endl;
    cin >> tipoProducto;

    cout << "Digite codigo: " << endl;
    cin >> codigo;

    cout << "Digite existencia: " << endl;
    cin >> existencia;

    cout << "Digite valor del producto: " << endl;
    cin >> valorProducto;

    listaProductos.push_back(Producto(marca, tipoProducto, codigo, existencia, valorProducto));
    
}


//main

int main(){
    Tienda laFarra;

    Cliente cliente1("Laura", "lau2002leon@outlook.com", 20, 0, "874847541");

    laFarra.agregarProducto();
    laFarra.agregarProducto();
    laFarra.mostrarTodosProducto();

    


    cout << " BIENVENIDO A TIENDITA LA FARRA " << endl;
    return 0;
}