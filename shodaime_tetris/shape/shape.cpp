#include "shape.h"
#include "misc.h"
// bool Shape::rotateLeft(){
//     return this->canRotateLeft();
// };

// bool Shape::rotateRight(){
//     return this->canRotateRight();
// };

// bool Shape::smashDown(){
//     return this->canSmashDown();
// };

Position* Shape::rotateLeft(int _x, int _y){
    switch(this->state){
        case A:
            this->state = D;
            break;
        case B:
            this->state = A;
            break;
        case C:
            this->state = B;
            break;
        case D:
            this->state = C;
            break;
    }
    return this->definition(_x, _y);
};

Position* Shape::rotateRight(int _x, int _y){
    switch(this->state){
        case A:
            this->state = B;
            break;
        case B:
            this->state = C;
            break;
        case C:
            this->state = D;
            break;
        case D:
            this->state = A;
            break;
    }
    return this->definition(_x, _y);
};
