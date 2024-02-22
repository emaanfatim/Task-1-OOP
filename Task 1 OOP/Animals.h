#include<iostream>
#include<string>
using namespace std;

class Animal {
public:
    virtual string makeSound() const = 0;
};

class Lion : public Animal {
public:
    string makeSound() const override {
        return "Lion says roar!!!";
    }
};

class Elephant : public Animal {
public:
    string makeSound() const override {
        return "Elephant says trumpet!!!";
    }
};

class Monkey : public Animal {
public:
    string makeSound() const override {
        return "Monkey says coo!!!";
    }
};

class Bird : public Animal {
public:
    string makeSound() const override {
        return "Bird says chirp!!!";
    }
};

void hearSound(const Animal& animal) {
    cout << animal.makeSound() << endl;
}