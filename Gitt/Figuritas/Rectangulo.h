//#ifndef RECTANGULO_H
// Guardas
//#define RECTANGULO_H

//CLASE RECTANGULO

class Rectangulo{
    private:
        float ancho, largo;
    public:
        Rectangulo(); //no olvidar
        Rectangulo( float, float );
        void calcularArea();
        void calcularPerimetro();
        float getLargo();
        float getAncho();
        void setLargo(float);
        void setAncho(float);
};

//#endif /* !RECTANGULO_H */