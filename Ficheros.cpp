#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char a;
    string oracion;
    ofstream fich("Ficheros.txt");

    if (!fich) {
        cout << "Error al abrir el archivo." << endl;
        return 1;
    }

    cout << "Ingrese una oracion ('.' para terminar): ";
    cin.ignore();
    getline(cin, oracion, '.');
    fich << oracion << ".";
    fich.close();
    cout << "Oracion escrita en el archivo exitosamente." << endl;

    return 0;
}

