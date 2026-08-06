#include <iostream>
#include <string>
#include <algorithm>

int main(){
    int decimal;
    
    // Input decimal
    std::cout<<"Enter Decimal Number => ";
    std::cin>>decimal;
    
    // decimal to binary 
    int i=0, d, temp1, temp2=decimal, reverse_d;
    std::string sd, binary;
    while(temp2>0){
        i++;
        temp1 = temp2%2;
        temp2 = temp2/2;
        
        if(i==1){
            sd = std::to_string(temp1);
        }else{
            sd = sd + std::to_string(temp1);
        }
    }

    std::reverse(sd.begin(), sd.end());


    binary = sd;

    std::cout<<"Binary => "<< binary<<std::endl;

    return 0;
}