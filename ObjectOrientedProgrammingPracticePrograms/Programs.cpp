/*
#include <iostream>
using namespace std;

class Animal { // Base class
public:
    void eat()
    {
        cout << "This animal eats food." << endl;
    }
};

class Dog : public Animal { // Derived class
public:
    void bark()
    {
        cout << "The dog barks." << endl;
    }
};

int main()
{
    Dog myDog;
    myDog.eat(); // Inherited method
    myDog.bark(); // Own method
    system("pause");
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
class Animal {  // base class
public:
    virtual void sound() {
        cout << "Some sound" << endl;
    }
};
class Dog : public Animal {
public:
    void sound() override {
        cout << "Woof" << endl;
    }
};
int main() {
    Dog myDog;
    Animal& refAnimal = myDog;
    refAnimal.sound(); // Outputs: Woof
    system("pause");
    return 0;
}*/
/*
#include <iostream>
using namespace std;
class Base {   // base class 
public:
    virtual void print() {
        cout << "Base function" << endl;
    }
};
class Derived : public Base {
public:
    void print() override {
        cout << "Derived function" << endl;
    }
};
int main() {
    Derived myDerived;
    myDerived.print(); // Calls Derived's print function, outputs: Derived function
    system("pause");
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

class AbstractClass {
public:
    virtual void pureVirtualFunction() = 0; // Pure virtual function
};

class ConcreteClass : public AbstractClass {
public:
    void pureVirtualFunction() override {
        cout << "Implemented pure virtual function" << endl;
    }
};

int main() {
    ConcreteClass myConcrete;
    myConcrete.pureVirtualFunction(); // Calls the implemented function
    system("pause");
    return 0;
}
#include <iostream>
using namespace std;

class Shape { // Abstract class
public:
    virtual double area() const = 0; // Pure virtual function
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Circle myCircle(5);
    cout << "Area of circle: " << myCircle.area() << endl; // Outputs the area
    system("pause");
    return 0;
}*/
/*
#include <iostream>
using namespace std;
class Animal { // Base class
protected:
    void eat()
    {
        cout << "This animal eats food." << endl;
    }
};
class Dog : public Animal { // Derived class
public:
    void accessor()
    {
        eat();
    }
    void bark()
    {
        cout << "The dog barks." << endl;
    }
};
int main()
{
    Dog myDog;
    myDog.accessor(); // Inherited method
    myDog.bark(); // Own method
    system("pause");
    return 0;
}*/
/*
#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() const = 0; // Pure virtual function making Shape an abstract class.
};
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return 3.14159 * radius * radius;
    }
};
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width * height;
    }
};
class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    double area() const override {
        return 0.5 * base * height;
    }
};

void printArea(const Shape& shape) {
    cout << "Area: " << shape.area() << endl;
}
int main() {
    Circle circle(5);
    Rectangle rectangle(10, 5);
    Triangle triangle(10, 5);
    cout << "Area of circle:\n ";
    printArea(circle);    // Outputs: Area: 78.5398
    cout << "Area of rectangle:\n ";
    printArea(rectangle); // Outputs: Area: 50
    cout << "Area of triangle:\n ";
    printArea(triangle);  // Outputs: Area: 25
    system("pause");
    return 0;
}*/
/*
#include <iostream>
#include <string>

// Abstract class Animal
class Animal {
public:
    // Pure virtual function makeSound
    virtual void makeSound() const = 0;
};

// Derived class Lion
class Lion : public Animal {
public:
    // Override makeSound method for Lion
    void makeSound() const override {
        std::cout << "Roar!" << std::endl;
    }
};

// Derived class Elephant
class Elephant : public Animal {
public:
    // Override makeSound method for Elephant
    void makeSound() const override {
        std::cout << "Trumpet!" << std::endl;
    }
};

// Derived class Monkey
class Monkey : public Animal {
public:
    // Override makeSound method for Monkey
    void makeSound() const override {
        std::cout << "Ooh ooh aah aah!" << std::endl;
    }
};

// Function to hear the sound of an animal
void hearSound(const Animal& animal) {
    animal.makeSound();
}

int main() {
    // Create instances of each animal type
    Lion lion;
    Elephant elephant;
    Monkey monkey;

    // Demonstrate polymorphism by calling hearSound function with different animal instances
    std::cout << "Hearing the sound of Lion: ";
    hearSound(lion);

    std::cout << "Hearing the sound of Elephant: ";
    hearSound(elephant);

    std::cout << "Hearing the sound of Monkey: ";
    hearSound(monkey);

    return 0;
}
*/