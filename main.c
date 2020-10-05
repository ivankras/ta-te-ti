#include <conio.h>
#include <stdio.h>
#include <windows.h>

#include "menu.h"

#define SIMBOLO_J1 X
#define SIMBOLO_J2 O

int main() {
    char input = '%';

    system("cls");
    while (input != '2') {
        imprimirMenu();

        // Obtener respuesta del usuario
        input = getch();

        switch (input) {
            case '1':
                // TODO
                // iniciarJuego();
                system("cls");
                break;
            case '2':
                // TODO
                system("cls");
                // salir();
                break;
            case 't':
                system("cls");
                printf("Aguante la T\n");
                break;
            default:
                // TODO: Tapado por el imprimirMenu
                system("cls");
                printf("Sos bobito?? Esa opcion no\n");
                break;
        }
    }

    return 0;
}