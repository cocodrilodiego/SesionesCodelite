#include "Persona.hpp"

int Persona::contadorDNI = 0;

Persona::Persona(int edad)
{
    // El DNI y el género se establecen de forma automática.
    this->edad = edad;
	generarDNI();
    generarGenero();
}

Persona::~Persona() {
	}

void Persona::mostrar() { 
	cout << "DNI: " << dni
         << " | Edad: " << edad
         << " | Genero: " << (genero ? "Mujer" : "Hombre")
         << endl; 
}

void Persona::generarDNI() {
    // Simplemente un contador con sufijo letra
    contadorDNI++;
    snprintf(dni, sizeof(dni), "%08d%c", contadorDNI, 'A' + (contadorDNI % 26));
}

void Persona::generarGenero() {
    genero = rand() % 2; // 0 o 1
}

int Persona::getEdad() const {
    return edad;
}

bool Persona::esMujer() const {
    return genero;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}
