#ifndef AVATAR_H_INCLUDED
#define AVATAR_H_INCLUDED

class AVATAR{
    private:
        int eje_x_int;
        int eje_y_int;
        int eje_x_ext;
        int eje_y_ext;
    public:
        ///Construct:
        AVATAR();
        AVATAR(int w,int x,int y,int z);
        ///Gets:
        int gets_eje_x_int();
        int gets_eje_y_int();
        int gets_eje_x_ext();
        int gets_eje_y_ext();
        ///Sets:
        void sets_eje_x_int(int cambio);
        void sets_eje_y_int(int cambio);
        void sets_eje_x_ext(int cambio);
        void sets_eje_y_ext(int cambio);

};

///---------------------Construct:---------------------

AVATAR::AVATAR(){

    eje_x_int = 5;
    eje_y_int = 5;
    eje_x_ext = 0;
    eje_y_ext = 0;

}

AVATAR::AVATAR(int w = 0,int x = 0,int y = 5,int z = 5){

    eje_x_int = w;
    eje_y_int = x;
    eje_x_ext = y;
    eje_y_ext = z;

}

///---------------------Gets:---------------------

int AVATAR::gets_eje_x_int(){
    return eje_x_int;
}

int AVATAR::gets_eje_y_int(){
    return eje_y_int;
}

int AVATAR::gets_eje_x_ext(){
    return eje_x_ext;
}

int AVATAR::gets_eje_y_ext(){
    return eje_y_ext;
}

///---------------------Sets:---------------------

void AVATAR::sets_eje_x_int(int cambio){
    eje_x_int = cambio;
}

void AVATAR::sets_eje_y_int(int cambio){
    eje_y_int = cambio;
}

void AVATAR::sets_eje_x_ext(int cambio){
    eje_x_ext = cambio;
}

void AVATAR::sets_eje_y_ext(int cambio){
    eje_y_ext = cambio;
}

#endif // AVATAR_H_INCLUDED
