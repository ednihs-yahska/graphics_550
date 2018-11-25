
#include "playfield.h"
#include <iostream>

Playfield::Playfield(int playfieldX, int playfieldY): playField(new int[playfieldX*playfieldY]) {
    for(int i=0; i<playfieldY; i++){
        for( int j=0; j<playfieldX; j++){
            playField[i*playfieldY+j] = 0;
        }
    }
}

Playfield::~Playfield(){
    delete[] playField;
};
