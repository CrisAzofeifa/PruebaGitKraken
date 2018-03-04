//
// Created by cris on 26/02/18.
//

#ifndef TRABAJOEXTRACLASEDATOS2_LSTACIRCULAR_H
#define TRABAJOEXTRACLASEDATOS2_LSTACIRCULAR_H

class NodoCircular{



};



class LstaCircular {

public:
    void InsertarAlInicio(int el);
    void InsertarAlFinal(int el);
    void InsertarEnPosicion(int pos, int el);
    int EliminarPrimero();
    int EliminarUltimo();
    void EliminarPorPosicion(int pos);
    void EditarPorPosicion(int pos, int el);
    int ObtenerPorPosicion(int pos);
    void ImprimirLista();

};


#endif //TRABAJOEXTRACLASEDATOS2_LSTACIRCULAR_H
