#include <cstdlib>
#include <iostream>

#include "Modelo/Place.h"
#include "Modelo/PlaceList.h"
#include "Modelo/Transition.h"
#include "Modelo/TransitionList.h"
#include "Modelo/Matrix.h"
#include "Controlador/Petri.h"


using namespace std;

int main(int argc, char **argv) { 
    // Se crea la lista de plazas (vacia)
    PlaceList *p = new PlaceList();

    // Se agregan los nodos a la lista
    p->addPlace(new Place("P1", 2));        // El constructor de Place toma el nombre y el peso de la plaza
    p->addPlace(new Place ("P2", 3));
    

    // Se crea la lista de transiciones (vacia)
    TransitionList *t = new TransitionList();
    
    // Se agregan las transiciones a la lista
    t->addTransition(new Transition("t1"));  // El constructor de Transition toma el nombre de la transicion
    t->addTransition(new Transition("t2"));
    t->addTransition(new Transition("t3"));
    
    // Se crea la matriz precondicion (fil x col: #plazas x #transiciones)
    Matrix *pre = new Matrix(p->getSize(), t->getSize()); 
    
    // Se setea cada elemento de la matriz de precondiciones
    pre->setElement(2, 0, 0);       // (valor precondicion, plaza, transicion)
    pre->setElement(1, 0, 1);
    pre->setElement(6, 1, 1);
    pre->setElement(4, 1, 2);
    
    // Se crea la matriz postcondicion (fil x col: #plzas x #transiciones)
    Matrix *post = new Matrix(p->getSize(), t->getSize());
    
    // Se setea cada elemento de la matriz de postcondicion
    post->setElement(1, 0, 2);      // (valor postcondicion, plaza, transicion)
    post->setElement(5, 0, 0);
    post->setElement(7, 1, 0);
    post->setElement(3, 1, 1);
    
    // Se crea la red de petri con las plazas, transiciones y matrices pre y post anteriores
    Petri *rdp = new Petri(p, t, pre, post);
    
    // Se ejecuta una transicion en la red de petri
    rdp->triggerTransition(t->getTransition(0));
   
    // Se retorna con codigo 0 (salida exitosa)
    return 0;
}

void fileReader(string filename){
ifstream file ( filename );

    if (!file) {
        cout << "There was a problem opening the file. Press any key to close.\n";
        getch();
        return 0;
    }

    int i=0;
    //store words in array while outputting, skipping blank lines
    while( file.good() )
    {
        getline ( file, testline, ' ');
        if (testline!="")
        {
            word[i]=testline;
            cout << word[i] << endl;
            i++;
        }
    }

    //output whole array with spaces between each word
    cout<<"\nArray contents:\n";
    for (int k=0;k<i;k++)
        cout<<word[k]<<" ";
    return 0;
}
