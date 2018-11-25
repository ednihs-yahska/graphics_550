
#include "gameRunner.h"
#include "playfield.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "shape/shape.h"
#include "shape/shapeS.h"
#include "shape/shapeI.h"
#include <fstream>

using namespace std;

GameRunner::GameRunner(Playfield* pf){
    this->playField = pf;
}

Shape* GameRunner::generateShape(){
    ofstream myfile;
    myfile.open("log.txt");
    srand((unsigned)time(0)); 
    int lowest=1, highest=2; 
    int range=(highest-lowest)+1;
    int random_integer = 1;//lowest+int(range*rand()/(RAND_MAX + 1.0));
    fprintf(stderr, "Generated random number");
    //myfile << "Generated random number " << random_integer;
    Shape* currentShape;
    switch(random_integer){
        case 1:{
            myfile << "Selected 1";
            currentShape = new ShapeI();
            break;}
        case 2:{
            currentShape = new ShapeS();
            break;}
        default:{
            int a = 0;
            break;}
    }
    fprintf(stderr, "Calling definition \n");
    Position* shapePosition = currentShape->definition(5,5);
    for(int i=0;i<4;i++){
        this->playField[shapePosition->x*this->playField->playfieldX+shapePosition->y] = 1;
    }
    //myfile.close();
    return currentShape;
}

int main(){
    Playfield* pf = new Playfield(10, 20);
    GameRunner* gr = new GameRunner(pf);
    Shape* s = gr->generateShape();
}