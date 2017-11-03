#include "TransitionList.h"
#include <iostream>

// Constructor (devuelve una lista vacia)
TransitionList::TransitionList() {

}

void TransitionList::addTransition(Transition* t){
    // Se agrega una transicion al final de la lista
    this->tList.push_back(t);
}

Transition* TransitionList::getTransition(int i){
    // Obtiene la transicion en la posicion i de la lista
    return this->tList[i];
}

int TransitionList::getSize(){
    // Devuelve el tamaño de la lista
    return this->tList.size();
}

int TransitionList::getIndexOf(std::string label){   
    // Se recorre toda la lista
    for (int i = 0; i < this->tList.size(); i++) {
        // Se obtiene el nombre de la transicion actual
        std::string tLabel = this->tList[i]->getLabel();
        
        // Si el nombre de la transicion actual es igual a la transicion buscada se devuelve el indice
        if(label.compare(tLabel) == 0)
            return i;
    }
    
    // Si no se encotnro la transicion se devuelve -1
    return -1;
}

