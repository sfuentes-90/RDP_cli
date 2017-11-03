#ifndef MATRIX_H
#define MATRIX_H

#include <vector>       // Permite utilizar vectores
#include <iostream>     // Permite la entrada/salida estandar

class Matrix {
    private:
        int rows;               // #Filas de la matriz
        int cols;               // #Columnas de la matriz
        std::vector<int> m;     // Matriz
    
    public:
        // Constructor (crea una matriz vacia (0))
        Matrix(int, int);
        
        // Metodos
        void setElement(int, int, int);         // Cambia el valor de un elemento de la matriz (elemento, fila, columna)    
        int getElement(int, int);               // Obtiene el valor de un elemento de la matriz (fila, columna)
        std::vector<int> getColumn(int);        // Obtiene una columna de la matriz (#columna que se desea obtener)
        void printMatrix();                     // Imprime la matriz
};
#endif /* MATRIX_H */

