#include <vector>

struct Coords {

    double X;
    double Y;

}; using Coordinates = struct Coords;

class Point {

    //TODO: Alter the code such that "point" inherits from a future class called "Matter"
    Coordinates position;
    double Mass;
    double Velocity;
    double Acceleration;
    double Momentum;

};

