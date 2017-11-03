#include "Place.h"

// Constructor
Place::Place(std::string label, int value) {
    this->label = label;
    this->value = value;
}

std::string Place::getLabel(){
    // Devuelve el nombre de la plza
    return this->label; 
}

int Place::getValue(){
    // Devuelve el peso de la plaza 
    return this->value;
}

