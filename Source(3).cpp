#include <iostream>

using namespace std;

class Shape
{
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
};

class Rectangle : public Shape
{
public:
    Rectangle(double width, double height) :
        width(width), height(height)
    {}

    double area() override
    {
        return width * height;
    }

    double perimeter() override
    {
        return 2 * (width + height);
    }

private:
    double width, height;
};

class Circle : public Shape
{
public:
    Circle(double radius) :
        radius(radius)
    {}

    double area() override
    {
        return 3.14159265 * radius * radius;
    }

    double perimeter() override
    {
        return 2 * 3.14159265 * radius;
    }

private:
    double radius;
};

int main()
{
    Shape* shapes[7];

    for (int i = 0; i < 5; i++)
    {
        shapes[i] = new Rectangle(i + 1, i + 2);
    }

    shapes[5] = new Circle(5);
    shapes[6] = new Circle(10);

    for (int i = 0; i < 7; i++)
    {
        cout << "Shape " << i << ": ";
        cout << "Area = " << shapes[i]->area();
        cout << ", Perimeter = " << shapes[i]->perimeter() << endl;
    }

    for (int i = 0; i < 7; i++)
    {
        delete shapes[i];
    }

    return 0;
}
