#include <stdio.h>

#include "mensajes.h"

void imprimirCartelTaTeTi();
void imprimirOpciones();

void imprimirMenu() {
    // Imprimir mensaje de Ta-Te-Ti
    imprimirCartelTaTeTi();

    // Imprimir opciones de juego
    imprimirOpciones();
}

void imprimirCartelTaTeTi() {
    printf(" _______   _    _______  _____  _______  _\n");
    printf("|__   __| / \\  |__   __||   __||__   __|| |\n");
    printf("   | |   / _ \\    | |   | |-__    | |   | |\n");
    printf("   |_|  /_/ \\_\\   |_|   |_____|   |_|   |_|\n\n");
}

void imprimirOpciones() {
    printf("Elegi uno (sin presiones): \n");
    printf("\t1) Jugar (para gente piola)\n");
    printf("\t2) Salir (para amigos de la gorra)\n");
}
