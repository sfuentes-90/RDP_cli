#ifndef PLACELIST_H
#define PLACELIST_H

#include <vector>                   // Permite el uso de vectores
#include "Place.h"                  // Utiliza el Modelo de datos Place

class PlaceList {
private:
    std::vector<Place*> pList;      // Lista de Plazas

public:
    // Constructor (crea una lista vacia)
    PlaceList();
    
    // Metodos
    void addPlace(Place*);                  // Agrega una plaza a la lista (por la derecha)  
    int getSize();                          // Retorna el tamaño de la lista
    std::vector<int> getWeightVector();     // Retorna el vector con los pesos de todas las Plazas    
};

#endif /* PLACELIST_H */

