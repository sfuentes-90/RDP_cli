#include "Transition.h"

// Constructor
Transition::Transition(std::string label){
    this->label = label;
}

std::string Transition::getLabel(){ 
    // Devuelve el nombre de la transicion
    return this->label; 
}

