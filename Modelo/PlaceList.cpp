#include "PlaceList.h"

// Constructor (devuelve una lista vacia)
PlaceList::PlaceList() {
}

void PlaceList::addPlace(Place* t){
    // Se agrega un elemento Place al final  vector
    this->pList.push_back(t);
}

int PlaceList::getSize(){
    // Devuelve el tamaño de la lista
    return this->pList.size();
}


std::vector<int> PlaceList::getWeightVector(){
    // Se crea un vector de enteros vacio (del mismo tamaño que la lista de plazas)
    std::vector<int> v(this->getSize());

    // Obtiene el peso de cada plaza en la lista y lo copia en el vector resultado
    for (int i = 0; i < this->getSize(); i++) {
        v[i] = this->pList[i]->getValue();
    }

    return v;
}
