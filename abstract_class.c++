#include <iostream>
using namespace std;


class Shape {
public:
    virtual void calculateArea() = 0; 
};


class Rectangle : public Shape { 
private:
    float length, width;

public:
    void getData() {
        cout << "\nEnter length and width of rectangle: ";
        cin >> length >> width;
    }

    void calculateArea() override { 
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

class Circle : public Shape { 
    float radius;

public:
    void getData() {
        cout << "\nEnter radius of circle: ";
        cin >> radius;
    }

    void calculateArea() override { 
        cout << "Area of Circle: " << 3.14159 * radius * radius << endl;
    }
};

int main() {
    Rectangle r;
    Circle c;

    r.getData();
    r.calculateArea();

    c.getData();
    c.calculateArea();

    return 0;
}