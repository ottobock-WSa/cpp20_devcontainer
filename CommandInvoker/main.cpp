#include <iostream>
#include <string>
#include "CommandInvoker.hpp"

void print(std::string str){
    std::cout << str << std::endl;
}

int main(int argc, char const *argv[]){
    TestCommandInvoker invoker;
    SimpleCommand command(print, "Hello, World!");
    const SimpleCommand constCommand(print, "const Hello");

    invoker.Execute(command);
    invoker.Execute(constCommand);
    invoker.Execute(SimpleCommand(print,"rvalue Hello, World!"));

    return 0;
}