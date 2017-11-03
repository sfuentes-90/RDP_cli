#ifndef TRANSITIONLIST_H
#define TRANSITIONLIST_H

#include <vector>           // Permite el uso de string
#include "Transition.h"     // Utiliza el Modelo de Datos "Transition"

class TransitionList {
private:
    std::vector<Transition*> tList;     // Lista de Transiciones

public:
    // Constructor (crea una lista de transiciones vacia)
    TransitionList();
    
    // Metodos
    void addTransition(Transition*);    // Agrega una transicion a la lista (por la derecha)
    Transition* getTransition(int);     // Devuelve la transicion i-esima de la lista
    int getSize();                      // Devuelve el tamaño de la lista
    int getIndexOf(std::string);        // Devuelve el indice de una transicion en la lista
};

#endif /* TRANSITIONLIST_H */

