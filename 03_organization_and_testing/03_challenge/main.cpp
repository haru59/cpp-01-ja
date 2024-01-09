#include"math_operations.h"
#include<iostream>

int main(){
    float x {0};
    float y {0};
    char z {0};
    std::cout << "Enter a calculation: ";
    std::cin >> x >> z >> y;
    if(z=='+'){
        std::cout <<"Result: " << MathOps::addition(x,y) <<std::endl;
    }else if(z=='-'){
        std::cout <<"Result: " << MathOps::subtraction(x,y) <<std::endl;
    }else if(z=='*'){
        std::cout <<"Result: " << MathOps::multiplication(x,y) <<std::endl;
    }else if(z=='/'){
        std::cout <<"Result: " << MathOps::division(x,y) <<std::endl;
    }else{
        std::cout <<"Error" << std::endl;
    }
    return 0;
}