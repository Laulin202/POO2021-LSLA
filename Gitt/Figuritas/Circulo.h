//#ifndef CIRCULO_H
// Guardas
//#define CIRCULO_H

//CLASE CIRCULO

class Circulo{
    private: //atributos
        float radio;
        float PI = 3.1416;
    
    public:
        Circulo(); //NO OLVIDAR
        Circulo( float );
        void calcularArea();
        void calcularPerimetro();
        float getRadio();
        void setRadio(float);
};


//#endif /* !CIRCULO_H */