// Ejemplo de manejo de Archivos en C++

//manejo de consola
#include <iostream>
//biblioteca
#include <fstream>
#define MAXSIZE 128

int main()
{
    //enviar la cadena HW al flujo std::cout
    std::cout << "Leyendo archivo" << std::endl;

    std::ifstream file;
    file.open("Prueba.txt", std::ifstream::in);

    if (file.is_open()) {
        std::cout << "archivoabierto\n";
        //buffer o memoria temporal para almacenar una linea
        char buffer[MAXSIZE];
        //Leer linea a linea el archivo
        while (!file.eof()) {
            file.getline(buffer, MAXSIZE);
            std::cout << buffer << std::endl;
        }
    }
    else {
        std::cout << "no se encuentra el archivo\n";

    }


}

