#include "shapeI.h"
#include <iostream>

Position* ShapeI::definition(int _x, int _y){
    fprintf(stderr, "Above possible segmentation fault");
    Position* p1; Position* p2; Position* p3; Position* p4;
    Position* pos = new Position[4];
    
    switch(this->state){
        case A:
        case D:
            p1 = new Position(_x, _y);
            p2 = new Position(_x, _y-1);
            p3 = new Position(_x, _y-2);
            p4 = new Position(_x, _y-3);
            fprintf(stderr, "Test A D \n %d ", p1->x);
            break;
        case B:
            fprintf(stderr, "Test B\n");
            p1 = new Position(_x, _y);
            p2 = new Position(_x+1, _y);
            p3 = new Position(_x+2, _y);
            p4 = new Position(_x+3, _y);
            fprintf(stderr, "Test B\n");
            break;
        case C:
            fprintf(stderr, "Test B\n");
            p1 = new Position(_x, _y);
            p2 = new Position(_x-1, _y);
            p3 = new Position(_x-2, _y);
            p4 = new Position(_x-3, _y);
            fprintf(stderr, "Test C \n");
            break;
        fprintf(stderr, "After possible segmentation fault");
        pos = (Position[4]){*p1, *p2, *p3, *p4};
        return pos;
    }
};

// ShapeI::~ShapeI(){
//     int a = 0;
// }
