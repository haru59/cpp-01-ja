#include"math_operations.h"
#include<iostream>
int main(){
    float a {0};
    float b {0};
    char c {0};
    std::cout << "Enter a calculation:";
    std::cin >> a >> c >> b;
    if(c=='+'){
        std::cout <<"Result:" << MathOps::addition(a,b) <<std::endl;
    }else if(c=='-'){
        std::cout <<"Result:" << MathOps::subtraction(a,b) <<std::endl;
    }else if(c=='*'){
        std::cout <<"Result:" << MathOps::multiplication(a,b) <<std::endl;
    }else if(c=='/'){
        std::cout <<"Result:" << MathOps::division(a,b) <<std::endl;
    }else{
        std::cout <<"Error" << std::endl;
    }
}