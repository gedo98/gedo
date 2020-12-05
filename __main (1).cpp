#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    virtual double area() = 0;

    virtual double circumference() = 0;
};

class Ellipse : public Shape {
public:
    double a, b;
    const double PI = 3.141592654;

    Ellipse(double A, double B) {
        this->a = A;
        this->b = B;
    }

    Ellipse() {}

    double area() override {
        return a * b;
    }

    double circumference() override {
        return (2 * PI) * sqrt(((a * a) + (b * b)) / 2);;
    }
};

class Circle : public Ellipse {
public:
    double radius;

    Circle(double Radius) {
        this->radius = Radius;
    }

    double area() override {
        return PI * (radius * radius);
    }

    double circumference() override {
        return 2 * PI * radius;;
    }
};

class Polygon : public Shape {
public:
    double p, a;

    Polygon() {}

    Polygon(double numberOfSides, double raduis) {
        this->p = numberOfSides;
        this->a = raduis;
    }

    double area() override {
        return (1.0 / 2.0) * (p * a);
    }

    double circumference() override {
        return a * p;
    }

};

class Triangle : public Polygon {
public:
    double base, height;
    double a, b, c;

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

    double circumference() override {
        float p = (a + b + c) / 2;
        float At = sqrt(p * (p - a) * (p - b) * (p - c));
        float A = 3.14 * pow(((a * b * c) / (4 * At)), 2);
        return A;
    }

};

class Rectangle : public Polygon {
public:
    double width, height;

    Rectangle(double Width, double Height) {
        this->width = Width;
        this->height = Height;
    }

    double area() override {
        return width * height;
    }

    double circumference() override {
        return width + width + height + height;
    }
};

class Square : public Polygon {
public:
    double side;

    Square(double Side) {
        this->side = Side;
    }

    double area() override {
        return side * side;
    }

    double circumference() override {
        return side * 4;
    }

};

int main() {

    Ellipse e(6, 2);
    cout << "Ellipse area =" << e.area() << "Π" << endl;
    cout << "Ellipse circumference =" << e.circumference() << "meters" << endl;

    Circle c(3);
    cout << "Circle area =" << c.area() << "meters²";
    cout << "Circle circumference =" << c.circumference() << "meters";

    Polygon p(10, 6);
    cout << "Polygon area =" << p.area() << "meters²";
    cout << "Polygon circumference =" << p.circumference() << "meters";

    Triangle t(10, 20, 30, 20, 50);
    cout << "Triangle area =" << t.area() << "meters²";
    cout << "Triangle circumference =" << t.circumference() << "meters";

    Rectangle r(10, 20);
    cout << "Rectangle area =" << r.area() << "meters²";
    cout << "Rectangle circumference =" << r.circumference() << "meters";

    Square s(10);
    cout << "Square area =" << s.area() << "meters²";
    cout << "Square circumference =" << s.circumference() << "meters";


}
