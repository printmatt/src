#include <string>
#define PI 3.14159

#ifndef SHAPES_H
#define SHAPES_H
class Shape{
    public:
        virtual float area() const = 0;
        virtual float perimeter() const =0;
        virtual std::string str() const = 0;

};

class Rectangle : public Shape{
    public:
        Rectangle(float length, float width);
        float getLength() const;
        float getWidth() const;
        float area() const;
        float perimeter() const;
        std::string str() const;

    private:
        float length;
        float width;
};

class Square : public Rectangle{
    public:
        Square(float side);
        std::string str() const;

};

class Circle : public Shape {
    public:
        Circle(float radius);
        float getRadius() const;
        float area() const;
        float perimeter() const;
        std::string str() const;

    private:
        float radius;
};
#endif
