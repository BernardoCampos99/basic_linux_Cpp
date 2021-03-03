#include "debug.h"

void debugPrintEndL(const char* message){
        std::cout << message << std::endl;
}

void debugPrint(const char* message){
        std::cout << message;
}

void debugStop(){
        std::cin.get();
}