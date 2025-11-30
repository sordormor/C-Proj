//
// Created by saras on 08.11.2025.
//
#include <iostream>
#include <memory>

#include "MathHelper.h"
#include "Student.h"
#include "ANIMAL.h"

class Cat : public ANIMAL{
    public:
    void say() const override {
        std::cout<<"Meow\n";
    };
};
class Dog : public ANIMAL {
    public:
    void say() const override {
        std::cout<<"Woof\n";
    }
};
class Fox : public ANIMAL {
    public:
    void say() const override {
        std::cout<<"What does the Fox say?\n";
    }
};
int main() {
    Student s("Savely",18);
    std::unique_ptr<Student> P1(new Student("Savely",18));
    std::shared_ptr<Student> P2(new Student("Savely",20));
    std::shared_ptr<Student> P3 = P2;
    P1->showinfo();
    P2->showinfo();
    P3->showinfo();
    std::cout<<&P1;
    std::cout<<MathHelper::prost(1214421098)<<"\n";
    MathHelper::rectangle(12,3290);
    MathHelper::circle(12);
    Cat cat;
    Dog dog;
    Fox fox;
    cat.say();
    dog.say();
    fox.say();
    return 0;

}