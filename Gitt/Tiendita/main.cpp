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
        float getValorProducto();
        int getExistencia();
        void setExistencia( int );
        int getCodigoProducto();
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

int Producto::getCodigoProducto(){
    return this->codigoProducto;
}

float Producto::getValorProducto(){
    return this->valorProducto;
}

int Producto::getExistencia(){
    return this->existencia;
}

void Producto::setExistencia( int existencia ){
    this->existencia = existencia;
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
        int getId();
};

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

//CLASE DETALLEVENTA

class DetalleVenta{
    private:
        Producto producto;
        float valor;
        float IVA;
        int cantidadProducto;  
    public:
        DetalleVenta();
        DetalleVenta( Producto, float, float, int);

};

//CONSTRUCTORES DETALLEVENTA

DetalleVenta::DetalleVenta(){}

DetalleVenta::DetalleVenta(Producto producto, float valor, float IVA, int cantidadProductos){
    this->producto = producto;
    this->valor = valor;
    this->IVA = IVA;
    this->cantidadProducto = cantidadProducto;
}

//CLASE VENTA

class Venta{
    private:
        Cliente cliente;
        string fecha;
        float valorTotal;
        list<DetalleVenta> listaDetalleVenta;
        float IVATotal;
        int id;
    public:
        Venta();
        Venta(Cliente, string, float, float, int);
        void agregarDetalleVenta( Producto, float, float, int );
        void agregarDatos(Cliente, string, float, float, int);

};

//CONSTRUCTORES VENTA

Venta::Venta(){}

Venta::Venta(Cliente cliente, string fecha, float valorTotal, float IVATotal, int id){
    this->cliente = cliente;
    this->fecha = fecha;
    this->valorTotal = valorTotal;
    this->IVATotal = IVATotal;
    this->id = id;

}

//METODOS VENTA

void Venta::agregarDetalleVenta( Producto producto, float valor, float IVA, int cantidadProductos){
    this->listaDetalleVenta.push_back(DetalleVenta( producto, valor, IVA, cantidadProductos));
}

void Venta::agregarDatos(Cliente cliente, string fecha, float valorTotal, float IVATotal, int id ){
    this->cliente = cliente;
    this->fecha = fecha;
    this->valorTotal = valorTotal;
    this->IVATotal = IVATotal;
    this->id = id;

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
        list<Venta> listaVenta;
    public:
        Tienda();
        void mostrarTodosProducto();
        void mostrarTodosCliente();
        void agregarProducto();
        void agregarCliente();
        Producto buscarProducto( int );
        Cliente buscarCliente( int );
        void vender();


};

//CONSTRCUTORES TIENDA

Tienda::Tienda(){
    this->nombre = "La Farra";
    this->nombreDueno = "Laura";
    this->capClient = 10;
    this->capProducto = 20;
}

//METODOS TIENDA

void Tienda::vender(){
    int op, codigoProducto, cantProductos, id;
    float valorTotalProducto, valorTotal = 0;
    Cliente cliente;
    Producto producto;
    Venta venta;
    string fecha;

    while (op != -1){

        valorTotalProducto = 0;

        cout << "Digite codigo del producto" << endl;
        cin >> codigoProducto;

        producto = this->buscarProducto(codigoProducto);

        cout << "Digite cantidad del producto" << endl;
        cin >> cantProductos;

        //se valida que haya existencia 
        if(producto.getExistencia() - cantProductos >= 0 ){
            //ahora se actualiza la existencia de este objeto producto
            producto.setExistencia( producto.getExistencia() - cantProductos);
            cout << "La nueva existencia del producto es: " << producto.getExistencia() << endl;


            valorTotalProducto = producto.getValorProducto() * cantProductos;
            valorTotal = valorTotal + valorTotalProducto;

            venta.agregarDetalleVenta( producto, producto.getValorProducto(), 0, cantProductos );
        }
        else{
            cout << " Lo siento, no hay disponibilidad de este producto :(" << endl;
        }

        cout << "1 .continuar compra" << endl << "-1. terminar compra" << endl;
        cin >> op;

    }
    //Cliente cliente, string fecha, float valorTotal, float IVATotal, int id


    cout << "Digite id del cliente: " << endl;
    cin >> id;
    cliente = this->buscarCliente(id);

    cout << "Digite fecha" << endl;
    cin >> fecha;

    venta.agregarDatos( cliente, fecha, valorTotal, 0, cliente.getId()); //cambiar el id por el id de factura

    cout << "El valor total de la compra es: " << valorTotal << endl;

    listaVenta.push_back(venta);

    

    



    
    // Se vende hasta que el cajero escriba menos uno

    // Se pide el codigo del producto
    // Se  busca el producto por código
    // Se pregunta cuantos se van a vender de ese producto
    // Verifican que exista el número en el inventario
    // Se calcula el valor total de la venta de ese producto
    // Se agrega a la lista de detalle
    // Se agrega el valor total al gran total
    // Se agrega el valor total del IVA a la suma del IVA
    // Se mofica la existencia del producto ( hacer setExistencia)

    // Una vez terminado de agregar productos
    // Se pide el numero del cliente
    // Se busca el cliente
    // Se calcula la fecha y hora actual
    // Se crea un numero de factua
    // Se asocia la lista del detalle de la factura
    // Se crea el objeto venta, en la lista de ventas de la tienda.  (relación de composicion.)



}

Cliente Tienda::buscarCliente(int id){
    Cliente cliente1;

        for(list<Cliente>::iterator cliente = listaCliente.begin(); cliente != listaCliente.end(); cliente ++){
            if (cliente->getId() == id){
                cliente1 = *cliente;
                break;
            }
        }
    return cliente1;
}


Producto Tienda::buscarProducto(int codigoProducto){
    Producto producto;

        for(list<Producto>::iterator it = listaProductos.begin(); it != listaProductos.end(); it ++){
            if (it->getCodigoProducto() == codigoProducto){
                producto = *it;
                break;
            }
        }
    return producto;
}

void Tienda::mostrarTodosProducto(){
    
//  list<Clase_a_recorrer>:: iterator nombre_iterador = nombre_lista_de_Clase.begin(); it != nombre_lista_de_Clase.end(); i++; 

    for(list<Producto>::iterator it = listaProductos.begin(); it != listaProductos.end(); it++){
         it-> mostrarProducto();
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

void Tienda::agregarCliente(){
    string nombre, email, telefono;
    int id;
    int cantLitrosTomados;

    cout << "Digite nombre: " << endl;
    cin >> nombre;

    cout << "Digite su email: " << endl;
    cin >> email;

    cout << "Digite id: " << endl;
    cin >> id;

    cout << "Digite cant litros tomados: " << endl;
    cin >> cantLitrosTomados;

    cout << "Digite telefono: " << endl;
    cin >> telefono;

    listaCliente.push_back(Cliente(nombre, email, id, cantLitrosTomados, telefono));





}


//main

int menu()
{
    int opcion;
    cout << "Menu Tienda\n"
              << endl;
    cout << "1. Agregar Productos" << endl;
    cout << "2. Mostrar Productos" << endl;
    cout << "3. Agregar cliente" << endl;
    cout << "4. Mostrar clientes" << endl;
    cout << "5. Vender" << endl;
    cout << "0. Salir\n"
              << endl;
    cout << "Digita el numero: ";
    cin >> opcion;
    return opcion;
}

int main(){
    int opcion, i;
    Tienda laFarra;

    do
    {
        opcion = menu();
        switch (opcion)
        {
        case 0:
            break;
        case 1:
            laFarra.agregarProducto();
            break;
        case 2:
            cout << "\n";
            laFarra.mostrarTodosProducto();
            cout << "\n";
            break;
        case 3:
            laFarra.agregarCliente();
            break;
        case 4:
            laFarra.mostrarTodosCliente();
            break;
        case 5:
            laFarra.vender();
            break;
        default:
            cout << "\nNumero invalido\n"
                      << endl;
            break;
        }
    } while (opcion != 0);

    


    cout << " BIENVENIDO A TIENDITA LA FARRA " << endl;
    return 0;
}