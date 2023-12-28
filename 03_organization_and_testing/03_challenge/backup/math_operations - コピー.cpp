#include"math_operations.h"
#include<iostream>
namespace MathOps{
    float x {0};
    float y {0};
    float addition(float x, float y){
        return x+y;
    }
    float subtraction(float x, float y){
        return x-y;
    }
    float multiplication(float x, float y){
        return x*y;
    }
    float division(float x, float y){
        if(y == 0){
            throw std::runtime_error("Division by zero");
        }else{
            return x/y;
    }
    }
}