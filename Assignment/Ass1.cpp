#include <iostream>

class Transition {
public:
    virtual void ManualTransition() {
        std::cout << "Performing manual transition" << std::endl;
    }

    virtual void AutomaticTransition() {
        std::cout << "Performing automatic transition" << std::endl;
    }
};

class Car : public Transition {
public:
    void ManualTransition() override {
        std::cout << "Car: Performing manual transition" << std::endl;
    }

    void AutomaticTransition() override {
        std::cout << "Car: Performing automatic transition" << std::endl;
    }
};

class MotorCycle : public Transition {
public:
    void ManualTransition() override {
        std::cout << "Motorcycle: Performing manual transition" << std::endl;
    }

    void AutomaticTransition() override {
        std::cout << "Motorcycle: Performing automatic transition" << std::endl;
    }
};

int main() {
    Transition* transition = nullptr;

    Car car;
    MotorCycle motorcycle;

    transition = &car;
    transition->ManualTransition();
    transition->AutomaticTransition();

    transition = &motorcycle;
    transition->ManualTransition();
    transition->AutomaticTransition();

    return 0;
}