#include "Matrix.h"

// Constructor
Matrix::Matrix(int rows, int cols){
    this->rows = rows;                  // Setea las filas
    this->cols = cols;                  // Setea las columnas

    this->m.reserve(rows*cols);         // dimensiona el vector a un tamaño de (filas x colimas)

    // Inicializa el vector en 0
    for (int i = 0; i < rows*cols; i++) {
        m[i] = 0;
    }
}

void Matrix::setElement(int e, int i, int j){
    // 
    this->m[i*cols + j] = e;
}
        
int Matrix::getElement(int i, int j){
    //             (fil , col)
    return this->m[i*cols + j];
}

std::vector<int> Matrix::getColumn(int col){
    std::vector<int> r(rows);       // crrea un vector resultado de dimension "rows"
    int idx = 0;                    // Contador para la posicion del vector

    // Toma un elemento de la matriz cada i+cols posiciones
    for ( int i = col; i < (rows*cols); i = (i+cols) ) {
        r[idx] = this->m[i];
        idx++;
    }

    return r;
}

void Matrix::printMatrix(){            
    for (int i = 0; i < this->rows; i++) {
        for (int j = 0; j < this->cols; j++) {
            std::cout << this->getElement(i, j) << " ";
        }
        std::cout << std::endl;
    }
}


