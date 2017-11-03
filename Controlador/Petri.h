#ifndef PETRI_H
#define PETRI_H

// Permite crear vectores
#include <vector>

// Modelos de datos usados (En la carpeta Modelo)
#include "../Modelo/PlaceList.h"
#include "../Modelo/TransitionList.h"
#include "../Modelo/Matrix.h"

class Petri {  
    private:
        // Campos privados de la RDP
        PlaceList *pList;           // Lista con todas las plazas y sus pesos de la red
        TransitionList *tList;      // Lista con todas las transicionmes de la red
        Matrix *pre;                // Matriz de precondicion de la red
        Matrix *post;               // Matriz de postcondicion de la red
        std::vector<int> m;         // vector con los pesos actuales de cada plaza
        
        std::vector<int> multiply(Matrix*, std::vector<int>*);                                  // Multiplica una matriz por el vector s
        std::vector<int> solveSum(std::vector<int>*, std::vector<int>*, std::vector<int>*);     // Resuelve la suma de vectores de la RDP
        void printVector(std::vector<int>);                                                     // Imprime un vector

    public:
        // Constructor
        Petri(PlaceList*, TransitionList*, Matrix*, Matrix*);

        // Metodos
        void triggerTransition(Transition*);        // Ejecuta una transicion de la RDP
};
#endif /* PETRI_H */

