#ifndef PERSONA_HPP
#define PERSONA_HPP
#include <cstdlib>       // Para rand(), srand()
#include <ctime>         // Para time()
#include <cstring>       // Para snprintf() o strcpy()
#include <iostream>
#include <vector>
using namespace std;

class Persona
{
public:
    Persona(int edad);
    int getEdad();
    bool esMujer;
    void setEdad(int edad);
    void mostrar();
	~Persona();

private:
    int genero; // 1: mujer, 0: hombre
    int edad;
    char dni[10];
	static int contadorDNI;  // Para generar DNI únicos

private:
    void generarDNI();
    void generarGenero();
};


#endif // PERSONA_HPP
