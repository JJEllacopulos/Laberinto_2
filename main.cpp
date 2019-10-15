#include<iostream>
#include<cstdlib>
#include<string.h>
#include <cstdio>
#include <cstring>
#include<clocale>
#include<ctime>
using namespace std;

#include "rlutil.h"
using namespace rlutil;

#include"Mapa.h"
#include"Avatar.h"

#include"Movimiento.h"

int main()
{

    ///Mapa:
    MAPA map_game();

    ///Avatar:
    AVATAR pj();

    ///Menu:
    char mov;

    while(true){

        ///map_game.leer_mapa();

        cout<< endl<< endl<< endl;
        cout<< "W) Arriva."<< endl;
        cout<< "S) Abajo."<< endl;
        cout<< "A) Izquierda."<< endl;
        cout<< "D) Derecha."<< endl;
        cout<< endl;

        mov = getch();

        system("pause>>NULL");
        system("cls");

        switch(mov){

            case 'w':
                mover_arriba();
            break;

            case 's':
                mover_abajo();
            break;

            case 'a':
                mover_izquierda();
            break;

            case 'd':
                mover_derecha();
            break;

            default:
            break;
        }



    }

    return 0;
}
