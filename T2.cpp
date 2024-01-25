#include <iostream>
using namespace std;

class point {
private:
    double x;
    double y;

public:
    // Constructor
    point(double xCord, double yCord) : x(xCord), y(yCord) {}

   //getter
    double getX() const { 
        return x;
    }
    double getY() const {
        return y;
    }

    // Setter 
    void setX(double x) { 
        x = x;
    }
    void setY(double y) {
        y = y;
    }

    // Method to calculate distance between two points
    double distance(const point& chagepoint) const {
        double xdif = x - chagepoint.getX();
        double ydif = y - chagepoint.getY();
        return sqrt(xdif * xdif + ydif * ydif);
    }
};

int main() {
    // Example usage
    point point1(4.0, 10.0);
    point point2(6.0, 8.0);

    // Get coordinates
    cout << "Point 1 : " << point1.getX() << " , " << point1.getY() << "\n";
    cout << "Point 2 : " << point2.getX() << " , " << point2.getY() << "\n";

    // Calculate and display distance
    cout << "Distance between points: " << point1.distance(point2) << endl;

    return 0;
}