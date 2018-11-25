#include "shape.h"
#include "misc.h"

class ShapeI: public Shape{
    private:
        // bool canRotateRight();
        // bool canRotateLeft();
        // bool canSmashDown();
    public:
        // Position* rotateRight(int _x, int _y);
        // Position* rotateLeft(int _x, int _y);
        // Position* smashDown(int _x, int _y);
        virtual Position* definition(int _x, int _y);
        //~ShapeI();
        //bool observedDefinition(int epoch);
};