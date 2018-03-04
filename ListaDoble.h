//
// Created by cris on 25/02/18.
//

#ifndef TRABAJOEXTRACLASEDATOS2_LISTADOBLE_H
#define TRABAJOEXTRACLASEDATOS2_LISTADOBLE_H

class NodoListaDobleInt
{
    NodoListaDobleInt *siguiente, *anterior;
    int dato;
    friend class ListaDoble;

};


class ListaDoble {
    NodoListaDobleInt *primero, *ultimo;

public:
    void inicializa();
    bool vacia();
    int tamano();
    void mostrar();
    void insertarAlFinal(int el);
    void insertarAlInicio(int el);
    void insertarEnPosicion(int pos, int el);
    int obtenerPorPosicion(int pos);
    void eliminarPrimero();
    void eliminarUltimo();
    void eliminarPorPosicion(int pos);
    void editarPorPosicion(int pos, int el);

};


#endif //TRABAJOEXTRACLASEDATOS2_LISTADOBLE_H
