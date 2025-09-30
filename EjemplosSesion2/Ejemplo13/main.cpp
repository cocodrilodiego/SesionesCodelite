#include <Persona.hpp>

int main(int argc, char** argv)
{
    srand(time(0));

    vector<Persona*> personas;
    vector<int> edades;

    // Generar las edades únicas (18 a 27)
    for (int i = 18; i <= 27; i++) {
        edades.push_back(i);
    }
    random_shuffle(edades.begin(), edades.end());

    // Crear 10 personas con esas edades
    for (int i = 0; i < 10; i++) {
        Persona* p = new Persona(edades[i]);
        personas.push_back(p);
    }

    // Mostrar información
    for (auto p : personas) {
        p->mostrar();
    }

    // Liberar memoria
    for (auto p : personas) {
        delete p;
    }

    return 0;
}
