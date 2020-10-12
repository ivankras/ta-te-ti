#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define SIMBOLO_J1 'X'
#define SIMBOLO_J2 'O'

void imprimirTablero(char[3][3]);
void imprimirReferencia(void);
char finDelJuego(char[3][3]);

void jugar() {
    char input = ')';
    char simbolo_actual = SIMBOLO_J1;
    int aux, turno = 1;
    char ganador = 0;
    char tablero[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    system("cls");
    printf("Comienza el juego. Suerte. Mensaje aburrido.\n\n");

    do {
        simbolo_actual = turno == 1 ? SIMBOLO_J1 : SIMBOLO_J2;
        printf("Turno del jugador %d (%c)\n\n", turno, simbolo_actual);
        imprimirTablero(tablero);
        printf("Ingrese el numero del casillero deseado (ver referencia)\n");
        input = getch();

        aux = input - 1 - '0';
        // TODO: Este control no se esta haciendo bien (lo de aux)
        while ((input < '1' || input > '9') && tablero[aux/3][aux%3] != ' ') {
            printf("Sos un salame. Elegi bien el casillero\n");
            input = getch();
        }
        tablero[aux/3][aux%3] = simbolo_actual;
        system("cls");

        // Fin del turno
        turno = turno == 1 ? 2 : 1;
        ganador = finDelJuego(tablero);
    } while (!ganador);

    imprimirTablero(tablero);
    switch (ganador) {
        case SIMBOLO_J1:
            printf("\n\nGanador: Jugador 1. Jugador 2 sos un muerto.\n");
            break;
        case SIMBOLO_J2:
            printf("\n\nGanador: Jugador 2. Jugador 1 sos un muerto.\n");
            break;
        case 1:
            printf("\n\nGanador: Nadie porque son altos giles.\n");
            break;
        default:
            printf("Comportamiento no deseado. Error en el programa. Giles.\n");
    }

    printf("Tocate una tecla pa' salir.");
    input = getch();

}

void imprimirTablero(char tablero[3][3]) {
    int i, j;
        
    // -------------------
    // |  X  |  O  |     |
    // -------------------
    // |     |  X  |     |
    // -------------------
    // |     |     |     |
    // -------------------

    for (i=0; i<3; i++) {
        printf("-------------------\n");
        for (j=0; j<3; j++) {
            printf("|  %c  ", tablero[i][j]);
        }
        printf("|\n");

    }
    printf("-------------------\n\n\n");

    imprimirReferencia();
}

void imprimirReferencia() {
    printf("Referencia:\n");
    printf(" 1 | 2 | 3\n");
    printf(" 4 | 5 | 6\n");
    printf(" 7 | 8 | 9\n");
}

char finDelJuego(char tablero[3][3]) {
    // 3 simbolos iguales en fila
    // 3 simbolos iguales en columna
    // 3 simbolos iguales en diagonal
    // todos los casilleros completos
    int i, j;

    for (i=0; i<3; i++) {
        if (tablero[i][0] != ' ') {
            if (tablero[i][0] == tablero[i][1]
                    && tablero[i][0] == tablero[i][2]) {
                // Ganador por fila
                return tablero[i][0];
            } 
        }
        if (tablero[0][i] != ' ') {
            if (tablero[0][i] == tablero[1][i]
                    && tablero[0][i] == tablero[2][i]) {
                // Ganador por columna
                return tablero[0][i];
            } 
        }
    }

    if (tablero[0][0] != ' ' 
            && tablero[0][0] == tablero[1][1]
            && tablero[0][0] == tablero[2][2]) {
        // Ganador por diagonal
        return tablero[0][0];
    }
    if (tablero[2][0] != ' ' 
            && tablero[2][0] == tablero[1][1]
            && tablero[2][0] == tablero[0][2]) {
        // Ganador por diagonal
        return tablero[2][0];
    }

    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            if (tablero[i][j] == ' ') {
                // finDeJuego = falso (casillas vacias)
                return 0;
            }
        }
    }
    
    // Tablero completo
    return 1;
}
