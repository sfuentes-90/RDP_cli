#ifndef TRANSITION_H
#define TRANSITION_H

#include <string>                       // Permite el uso de string

class Transition {
    private:
        std::string label;              // Nombre de la Transicion

    public:
        // Constructor
        Transition(std::string);  
        
        // Metodos
        std::string getLabel();         // Devuelve el nombre de la transicion
};
#endif /* TRANSITION_H */

