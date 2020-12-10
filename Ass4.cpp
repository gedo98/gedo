/* Name: Awadalla Hassan Awadalla
* Class: 2nd Class
* Department: Computer Engineering*/

#include <iostream>
// including existing libraries for input/output and math libraries for various operations
#include <cmath>
// using namespace std so we don't write it everytime std::
using namespace std;
// defining main Class that we'll inherite other shapes from it
class Shape {
// member access specifier
public:
    virtual double area() = 0;

    virtual double circumference() = 0;
};
// applying inheritance Principle here to inherite Ellipse from original shape
class Ellipse : public Shape {
public:
    double a, b;
    const double PI = 3.141592654;
// defining pi as constant and variables as double which is defining as fraction
    Ellipse(double A, double B) {
        this->a = A;
        this->b = B;
    }

    Ellipse() {}

    double area() override {
        return a * b;
    }
// mathematican formulas for area and circumference
    double circumference() override {
        return (2 * PI) * sqrt(((a * a) + (b * b)) / 2);;
    }
};
// applying inheritance Principle here to inherite Circle from original shape of it
class Circle : public Ellipse {
public:
    double radius;

    Circle(double Radius) {
        this->radius = Radius;
    }
// mathematican formulas for area and circumference
    double area() override {
        return PI * (radius * radius);
    }

    double circumference() override {
        return 2 * PI * radius;;
    }
};
// inheriting polygon from original shape
class Polygon : public Shape {
public:
    double p, a;

    Polygon() {}
// defining this geometric shape's variables and sides
    Polygon(double numberOfSides, double raduis) {
        this->p = numberOfSides;
        this->a = raduis;
    }

    double area() override {
        return (1.0 / 2.0) * (p * a);
    }
// this is the formulas of the shape
    double circumference() override {
        return a * p;
    }

};
// inheriting polygon from original shape
class Triangle : public Polygon {
public:
    double base, height;
    double a, b, c;
// defining variables for triangle shape to use formulas later
    Triangle(double a, double b, double c, double Base, double Height) {
        this->base = Base;
        this->height = Height;
        this->a = a;
        this->b = b;
        this->c = c;
    }

    double area() override {
        return (1.0 / 2.0) * base * height;
    }
// formulas for triangle
    double circumference() override {
        float p = (a + b + c) / 2;
        float At = sqrt(p * (p - a) * (p - b) * (p - c));
        float A = 3.14 * pow(((a * b * c) / (4 * At)), 2);
        return A;
    }

};
// inheriting rectangle from predecessor shape
class Rectangle : public Polygon {
public:
    double width, height;
// defining variables to use formulas later
    Rectangle(double Width, double Height) {
        this->width = Width;
        this->height = Height;
    }

    double area() override {
        return width * height;
    }
// formulas of rectangle area and circumference 
    double circumference() override {
        return width + width + height + height;
    }
};

class Square : public Polygon {
public:
    double side;
// inheriting square from its predecessor
    Square(double Side) {
        this->side = Side;
    }

    double area() override {
        return side * side;
    }
// formulas for area and circumference 
    double circumference() override {
        return side * 4;
    }

};

int main() {
// output of ellipse area and circumference 
    Ellipse e(6, 2);
    cout << "Ellipse area =" << e.area() << "Π" << endl;
    cout << "Ellipse circumference =" << e.circumference() << "meters" << endl;
//output of circle area and circumference 
    Circle c(3);
    cout << "Circle area =" << c.area() << "meters²";
    cout << "Circle circumference =" << c.circumference() << "meters";
//output of polygon area and circumference 
    Polygon p(10, 6);
    cout << "Polygon area =" << p.area() << "meters²";
    cout << "Polygon circumference =" << p.circumference() << "meters";
//output of triangle area and circumference 
    Triangle t(10, 20, 30, 20, 50);
    cout << "Triangle area =" << t.area() << "meters²";
    cout << "Triangle circumference =" << t.circumference() << "meters";
//output of rectangle area and circumference 
    Rectangle r(10, 20);
    cout << "Rectangle area =" << r.area() << "meters²";
    cout << "Rectangle circumference =" << r.circumference() << "meters";
// output of square area and circumference 
    Square s(10);
    cout << "Square area =" << s.area() << "meters²";
    cout << "Square circumference =" << s.circumference() << "meters";


}
