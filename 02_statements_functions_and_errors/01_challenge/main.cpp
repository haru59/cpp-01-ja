#include<iostream>

float input(){
    float number {};
    std::cout << "Input number" << std::endl;
    std::cin >> number;
    return number;
}

int main(){
    float num {input()};
    if(num>0){
        std::cout << num << " is positive" << std::endl;
    }     
    else if(num==0){
        std::cout << num << " is zero" << std::endl; 
    }
    else{std::cout << num << " is negative" << std::endl;
    }
}