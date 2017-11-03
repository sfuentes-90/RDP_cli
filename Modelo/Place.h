#ifndef PLACE_H
#define PLACE_H

#include <string>       // Permite el uso de string

class Place{
    private:
        std::string label;          // Nombre de la Plaza
        int value = 0;              // Peso de la plaza (por defecto 0)
        
    public:
        // Constructor
        Place(std::string, int);
        
        // getters
        std::string getLabel();     // Devuelve el nombre de la Plaza    
        int getValue();             // Devuelve el peso de la Plaza
};

#endif /* PLACE_H */

