//
// Created by saras on 08.11.2025.
//
#include "iostream"
#include "Student.h"

Student::Student(std::string name,int age) {
    this->name = name;
    this->age = age;
};
void Student::showinfo() {
    std::cout << name <<" "<< age<<"\n";
};