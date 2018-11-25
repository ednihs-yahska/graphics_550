#include "shapeS.h"

Position* ShapeS::definition(int _x, int _y){
    switch(this->state){
        Position* p1; Position* p2; Position* p3; Position* p4;
        case A:
            p1 = new Position(_x, _y);
            p2 = new Position(_x+1, _y);
            p3 = new Position(_x+1, _y+1);
            p4 = new Position(_x+2, _y+1);
            return (Position[4]){*p1, *p2, *p3, *p4};
        case B:
            p1 = new Position(_x, _y);
            p2 = new Position(_x, _y-1);
            p3 = new Position(_x, _y-2);
            p4 = new Position(_x+1, _y-2);
            return (Position[4]){*p1, *p2, *p3, *p4};
        case C:
            p1 = new Position(_x, _y);
            p2 = new Position(_x, _y-1);
            p3 = new Position(_x-1, _y-1);
            p4 = new Position(_x-2, _y-1);
            return (Position[4]){*p1, *p2, *p3, *p4};
        case D:
            p1 = new Position(_x, _y);
            p2 = new Position(_x, _y-1);
            p3 = new Position(_x, _y-2);
            p4 = new Position(_x, _y-3);
            return (Position[4]){*p1, *p2, *p3, *p4};
    }
};

// ShapeS::~ShapeS(){
//     int a = 0;
// }
