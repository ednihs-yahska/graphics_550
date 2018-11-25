#pragma once
#include "misc.h"

enum RotationState {
    A, B, C, D
};

class Shape{
    protected:
        // virtual bool canRotateRight();
        // virtual bool canRotateLeft();
        // virtual bool canSmashDown();
        //int topLeftX;
        //int topLeftY;
        RotationState state;
    public:
        Position* rotateRight(int _x, int _y);
        Position* rotateLeft(int _x, int _y);
        virtual Position* definition(int x, int y) = 0;
};