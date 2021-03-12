#include "tienda.h"

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

            venta.agregarDetalleVenta( producto, valorTotalProducto, 0, cantProductos );
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

    this->listaVenta.push_back(venta);

    

    



    
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
                return *it;
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