#include <iostream>


// Practice 1
// Base class
class Vehicle
{
    public:
    void startEngine()
    {
        std::cout << "Vroom!\n";
    }
};
// Derived Class
class Car : public Vehicle
{
    public:
    void honkHorn()
    {
        std::cout << "Beep!\n";
    }
};
int main()
{
    Car car;
    car.startEngine();
    car.honkHorn();

// Practice 2
void printHealth(Entity &e) {
    std::cout << "Health: " << e.health << "\n";

// Practice 3
// Add something here!
    virtual void click() {
        std::cout << "UI Button Clicked\n";
    }
};

// Practice 4
// Add the override keyword, observe the error, then fix the signature!
    void draw() const override {
        std::cout << "Drawing a rectangle\n";
    }
};
// Final Challenge
class Character
{
    public:
    virtual void attack()
    {
        std::cout << "Attack\n";
    }
};
class Warrior : public Character
{
    public:
    void attack() override
    {
        std::cout << "Swing a sword\n";
    }
};
class Mage : public Character
{
    public:
    void attack() override
    {
        std::cout << "Swing Casts a fireball!\n";
    }
};
void executeAttack(Character &character)
{
    character.attack();
}
int main()
{
    Warrior warrior;
    executeAttack(warrior);

    Mage mage;
    executeAttack(mage);



}