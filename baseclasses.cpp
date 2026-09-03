#include <vector>

struct Coords {

    double X;
    double Y;
    double Z;

}; using Coordinates = struct Coords;
using Vector2D = Coordinates;

class Point {

    //TODO: Alter the code such that "point" inherits from a future class called "Matter"
    Coordinates position;
    double Mass;
    Vector2D Velocity;
    Vector2D Acceleration;
    Vector2D Momentum;
    Vector2D NetForce;

};

