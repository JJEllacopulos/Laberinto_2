#ifndef MAPA_H_INCLUDED
#define MAPA_H_INCLUDED

class MAPA{
    private:
        char mapa[2][2][10][20];
    public:
        ///Construct:
        MAPA();

        ///Armar mapa:
        void armar_mapa();

        ///Leer mapa:
        void leer_mapa();

        ///Alterar mapa:
        void mover_NPC(int w, int x, int y, int z);
        void borrar_aterior_pocicion_NPC(int w, int x, int y, int z);

        bool Comprovacion_transpaso_mapa(){
        }

};

void MAPA::armar_mapa(){

    int w,x,y,z;

    for(w=0;w<2;w++){
        for(x=0;x<2;x++){
            for(y=0;y<10;y++){
                for(z=0;z<20;z++){

                    if(y == 0 || z == 0 || y == 9 || z == 19){

                        mapa[w][x][y][z] = '^';

                        if(w == 0){
                            if(y == 0){
                                mapa[w][x][y][z] = 'x';
                            }
                        }
                        else{
                            if(y == 9){
                                mapa[w][x][y][z] = 'x';
                            }
                        }

                        if(x == 0){
                            if(z == 0){
                                mapa[w][x][y][z] = 'x';
                            }
                        }
                        else{
                            if(z == 19){
                                mapa[w][x][y][z] = 'x';
                            }
                        }

                    }
                }
            }
        }
    }

}

MAPA::MAPA(){

    armar_mapa();

}

void MAPA::leer_mapa(){

    int w,x,y,z;

    for(w=0;w<2;w++){
        for(y=0;y<10;y++){
            for(x=0;x<2;x++){
                for(z=0;z<20;z++){
                    cout<< mapa[w][x][y][z];
                }
                cout<< " ";
            }
            cout<< endl;
        }
        cout<< endl;
    }

}

void MAPA::mover_NPC(int w, int x, int y, int z){
    ///Escribe una "A" en la pocicion actual del avatar.
    mapa[w][x][y][z] = 'A';
}

void MAPA::borrar_aterior_pocicion_NPC(int w, int x, int y, int z){

    ///Borra la "A" de la pocicion anterior.
    mapa[w][x][y][z] = ' ';

}

#endif // MAPA_H_INCLUDED
