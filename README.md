# ta-te-ti

## Menu principal    

- Mensaje que indique que se va a jugar al Ta-Te-Ti    
- Opciones:    
    1. Comenzar el juego    
    2. Salir    


## Juego propiamente dicho

- Matriz de 3x3, inicialmente vacia    
- Dos jugadores, se turnan para jugar    
    - cada uno tiene un identificador definido (un caracter)       
- En cada turno:    
    - el jugador elige un casillero vacio de la matriz    
    - lo marca con su identificador (ya no esta vacio)    
    - se verifica si el jugador gano    
        - un jugador gana si hay tres de sus identificadores en linea (diagonales incluidas)    
        - si gano, fin de la partida    
            - se anuncia ganador    
            - se vuelve al menu principal        
    - se verifica si la matriz esta llena    
        - se anuncia empate    
        - se vuelve al menu principal    
    - fin del turno    
