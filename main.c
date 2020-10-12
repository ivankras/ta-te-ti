#include <conio.h>
#include <stdio.h>
#include <windows.h>

#include "mensajes.h"
#include "juego.h"

int main() {
    char input = '%';

    system("cls");
    while (input != '2') {
        imprimirMenu();

        // Obtener respuesta del usuario
        input = getch();

        switch (input) {
            case '1':
                jugar();
                system("cls");
                break;
            case '2':
                // TODO
                system("cls");
                // salir();
                break;
            case 't':
            case 'T':
                system("cls");
                printf("Aguante la T\n");
                break;
            default:
                system("cls");
                printf("Sos bobito?? Esa opcion no\n");
                break;
        }
    }

    return 0;
}