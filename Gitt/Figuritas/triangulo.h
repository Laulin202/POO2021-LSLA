//#ifndef TRINANGULO_H
// Guardas
//#define TRIANGULO_H

//CLASE TRIANGULO

class Triangulo{
    private:
        float lado1, base, lado2;
    public:
        Triangulo();
        Triangulo( float, float, float);
        void calcularArea();
        void calcularPerimetro();
        void setBaseyAltura();

};

//#endif /* !TRIANGULO_H */