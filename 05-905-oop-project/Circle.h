#include <string>
using namespace std;


class Circle { // ClassName
private: // public, protected
    double radius;
    string color;

public:
    Circle();

    ~Circle();

    Circle(double radius, string color = "white");

    double getRadius() const;

    void setRadius(double radius);

    string getColor();

    double getArea();

    void print();
};
