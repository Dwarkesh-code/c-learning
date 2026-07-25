#include<iostream>
#include<string>

int main(){
    int age;
    std::string name;
    std::cout << "Enter Your Name and Age" << std::endl;
    //input name and age
    std::cin >> name >> age;
    
    std:: cout << "Hellow " << name << "! You're " << age << " year old" << std::endl;

    return 0;
}
