#pragma once
//#include "model.h"

class Playfield {

    private:

    public:
        int playfieldX;
        int playfieldY;
        int* playField;
        Playfield(int playfieldX=10, int playfieldY=20);  
        ~Playfield();
};