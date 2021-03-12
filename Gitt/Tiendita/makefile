all: compilar
compilar: producto cliente detalleVenta venta tienda main
		g++ -o a producto.o cliente.o detalleVenta.o venta.o tienda.o  main.o
cliente: cliente.cpp cliente.h
		g++ -c cliente.cpp
producto: producto.cpp producto.h
		g++ -c producto.cpp
detalleVenta: detalleVenta.cpp detalleVenta.h
		g++ -c detalleVenta.cpp
venta: venta.cpp venta.h
		g++ -c venta.cpp
tienda: tienda.cpp tienda.h
		g++ -c tienda.cpp
main: main.cpp tienda.h 
	  g++ -c main.cpp
