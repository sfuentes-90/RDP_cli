#include "Petri.h"

// Constructor de la clase Petri
Petri::Petri(PlaceList *pList, TransitionList *tList, Matrix *pre, Matrix *post){
    this->pList = pList;            // Se setea la lista de plazas
    this->tList = tList;            // Se setea la lista de transiciones
    this->pre = pre;                // Se setea la matriz de precondiciones
    this->post = post;              // Se setea la matriz de postcondiciones
    m = pList->getWeightVector();   // Se setea el vector de pesos de las plazas
}

// Dispara una transicion
void Petri::triggerTransition(Transition *t){
    // Se crea el vector S vacio (lleno de 0) con la dimension de la lista de transiciones
    std::vector<int> s(tList->getSize());
    
    // Se obtiene el indice de la transicion que se disparara en la lista de transiciones
    int idx = tList->getIndexOf(t->getLabel());
    
    // Se setea en 1 el vector S en el indice de la transicion que se disparara
    s[idx] = 1;
    
    // Se multiplica la matriz pre por el vector s
    std::vector<int> m1 = multiply(pre, &s);
    
    // Se multiplica la matriz post por el vector s
    std::vector<int> m2 = multiply(post, &s);
    
    // Se resuelve la suma de vectores y el resultado se almacena en el vector de pesos de plazas
    this->m = solveSum(&m, &m1, &m2);
    
    // Se imprime el resultado
    printVector(this->m);
}

std::vector<int> Petri::multiply(Matrix *m, std::vector<int> *v){
    int fil = pList->getSize();                 // #filas (plazas)
    int col = tList->getSize();                 // #columnas (transiciones)
    
    std::vector<int> result(fil);  // vector resultado de dimension #plazas (inicializado en 0)
    
    // Se realiza la multiplicacion entre la matriz y el vector
    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            int m1 = m->getElement(i,j);        // Multiplicando de la matriz (fil, col)
            int m2 = (*v)[j];                   // Multiplicando del vector (col)
                                   
            result[i] += m1 * m2;               // Se realiza la multiplicacion y se guarda en el vector resultado
        }       
    }
    
    return result;
}

std::vector<int> Petri::solveSum(std::vector<int> *v1, std::vector<int> *v2, std::vector<int> *v3){
    std::vector<int> result(pList->getSize());          // Vector resultado de la suma   
            
    for (int i = 0; i < pList->getSize(); i++) {
        // res  =   (vector1  -  vector2)  +  vector 3 
        result[i] = ((*v1)[i] - (*v2)[i])  +  (*v3)[i];
    }
    
    return result;
}

void Petri::printVector(std::vector<int> v){   
    // Imprime solo un "[" , para abrir el vector
    std::cout << "[";
    
    // Imprime los elementos del vector
    for (int i = 0; i < v.size(); i++) {
        // Si no es el ultimo elemento, imprime el elemento y un espacio en blanco
        if(i != (v.size()-1))
            std::cout << v[i] << " ";
        // Sino imprime el elemnto y cierra el vector imprimiendo un "]"
        else
            std::cout << v[i] << "]" << std::endl;
    }
}

