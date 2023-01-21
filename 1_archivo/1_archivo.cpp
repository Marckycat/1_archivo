// Ejemplo de manejo de Archivos en C++

//manejo de consola
#include <iostream>
//biblioteca
#include <fstream>
#define MAXSIZE 128


// 1_apuntadores.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

//pasar por referecnia
//pasar por valor
void acumular(float& num, float valor) {
    num += valor;
}


void ejemploApuntadores() {
    std::cout << "ejemplo de apuntadores\n";

    int valor = 66;
    int * ref2 = &valor; //Operador de referencia
    *ref2 = 128;

    printf("Valor: %i Mem:%#010x \n", *ref2, ref2);
    
    std::cout << "valor =" << valor << std::endl;
}

void promedio(float* valor_acum) {
    *valor_acum += *valor_acum;
}

int main(int argc, char** argv)
{
    //si no hay argumentos, cerrar programa
    if (argc <= 1) return 0;

    float suma = 0;
    std::cout << "argc: \n";
    //argv[0] es el nombre del programa
    for (int i = 0; i < argc; i++) {
        std::cout << argv[i] << std::endl;
        acumular(suma, atoi(argv[i]));
    }

    float promedio = suma / (argc - 1);
    std::cout << "promedio: " << promedio << std::endl;

    /*
    int x = 18;
    acumular(x, 8);
    std::cout << "nuevo valor: "<< x << std::endl;
    */
    return 0;

    int* v = 0;
    return 0;

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

            if (strcmp(buffer, "apuntadores") == 0)
                ejemploApuntadores();

            if (strcmp(buffer, "promedio") == 0)
                ejemploApuntadores();
        }
    }
    else {
        std::cout << "no se encuentra el archivo\n";

    }


}

