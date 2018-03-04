//
// Created by cris on 26/02/18.
//

#ifndef TRABAJOEXTRACLASEDATOS2_VENTANAPRINCIPAL_H
#define TRABAJOEXTRACLASEDATOS2_VENTANAPRINCIPAL_H

#include <iostream>
#include <string>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

class VentanaPrincipal {

public:
    void Generar();
    void Dibujar();
    void detener();

    bool run = true;
};


#endif //TRABAJOEXTRACLASEDATOS2_VENTANAPRINCIPAL_H
