//
// Created by cris on 26/02/18.
//

#include "VentanaPrincipal.h"



void VentanaPrincipal::Generar() {
        // Variável representando a janela principal
        ALLEGRO_DISPLAY *janela = NULL;

        // Inicializamos a biblioteca
        al_init();
        al_init_primitives_addon();
        al_init_font_addon();
    al_init_ttf_addon ();
    ALLEGRO_FONT *fonte = NULL;

    fonte = al_load_font("01DigitGraphicsRegular", 48, 0);

        // Criamos a nossa janela - dimensões de 640x480 px
        janela = al_create_display(640, 480);
        al_clear_to_color(al_map_rgb(255, 255, 255));
        al_draw_filled_triangle(40.0, 90.0, 120.0, 246.0, 400.0, 23.0, al_map_rgb(255, 255, 0));
        al_draw_text(fonte, al_map_rgb_f(255, 255, 255), 10,10, ALLEGRO_ALIGN_CENTER, "ASDFA");
        al_flip_display();

        // Preenchemos a janela de branco


        // Atualiza a tela
        al_flip_display();

    al_rest(10.0);

    // Desalocação da fonte e da janela
    al_destroy_font(fonte);
    al_destroy_display(janela);

    }




void VentanaPrincipal::Dibujar() {
        //al_draw_rectangle()
}

void VentanaPrincipal::detener() {
    run = false;
}
