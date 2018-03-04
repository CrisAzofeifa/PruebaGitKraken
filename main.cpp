#include <iostream>
#include "ListaSimple.h"
#include "ListaDoble.h"
#include "VentanaPrincipal.h"
#include<allegro5/allegro_primitives.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    VentanaPrincipal *nuevo = new VentanaPrincipal;
    nuevo->Generar();


    return 0;
}
