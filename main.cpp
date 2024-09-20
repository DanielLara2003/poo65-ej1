#include <iostream>
using namespace std;

// Function to analyze the average score
void analizar(double promedio) {
    if (promedio >= 7) {
        cout << "APROBADO";
    } else if (promedio >= 5 && promedio < 7) {
        cout << "SUSPENDIDO";
    } else if (promedio > 0 && promedio < 5) {
        cout << "REPROBADO";
    } else {
        cout << "NOTA NO VALIDA";
    }
}

int main() {
    double deber, trabajo, prueba, examen, promedio;

    cout << "Ingrese la nota de deberes: ";
    cin >> deber;
    cout << "Ingrese la nota de trabajos: ";
    cin >> trabajo;
    cout << "Ingrese la nota de prueba: ";
    cin >> prueba;
    cout << "Ingrese la nota de examen: ";
    cin >> examen;

    promedio = (deber + trabajo + prueba + examen) / 4;
    cout << "EL PROMEDIO ES : " << promedio << endl;
    cout << "RESULTADO: ";
    analizar(promedio);
    cout << endl;

    return 0;
}
