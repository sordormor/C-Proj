//
// Created by saras on 08.11.2025.
//
#include <cmath>
#include <iostream>
#include "MathHelper.h"

std::string MathHelper::prost(int a){
    for(int i = 1; i<= sqrt(a)+1; i++) {
        if (a%i == 0) {
            return "YES";
        }
    }
    return "NO";
};
void MathHelper::rectangle(int b,int c) {
    std::cout<<b*c<<"\n";
};
void MathHelper::circle(int d) {
    std::cout<<std::numbers::pi*d*d<<"\n";
};