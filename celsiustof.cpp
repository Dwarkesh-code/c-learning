#include <iostream>

int main() {
    float celsius, f;
    std::cout<<"Enter Temprature in Celsius => ";
    std::cin>>celsius;
    f = celsius*(1.8)+32;
    std::cout<<"Fahrenheit => "<<f<<"°F"<<std::endl;
    return 0;
}