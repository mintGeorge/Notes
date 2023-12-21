#include <iostream>
#include <fstream>

int main() {

    //std::ofstream hehe;
    //hehe.open("hehe.txt");
    
    std::string checkNS;
    std::cout << "---------Notes---------\n";
    int i=1;
    while(1){
        if(checkNS.find("\n")){
            std::cout << i << ".";
        }
        std::getline(std::cin,checkNS);
        i++;
        if(checkNS == "b"){
            break;
        }
    }

    
    return 0;
}
