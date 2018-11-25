#pragma once
#include "playfield.h"
#include "shape/shape.h"

enum GameShapeActions {
    RotateLeft,
    RotateRight,
    SmashDown,
    Left,
    Right
};

enum GameActions {
    Pause,
    Play,
    Quit
};

class GameRunner {
    public:
        Playfield* playField;
        GameRunner(Playfield* pf);
        Shape* generateShape();
};