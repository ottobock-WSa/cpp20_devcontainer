#include <iostream>
#include <string>
#include "stack.hpp"

int main(int argc, char const *argv[]){

    Stack<double> s(10);
    s.push(0.1);
    s.push(0.2);
    s.push(0.3);


    while(!s.isEmpty()){
        std::cout << s.pop() << std::endl;
    }

    Stack<int> s2(5);
    s2.push(1);
    s2.push(2);


    while(!s2.isEmpty()){
        std::cout << s2.pop() << std::endl;
    }

    Stack<std::string> s3(4);
    s3.push("hello");
    s3.push("world");

    std::cout << s3.pop() << std::endl;

    Stack<int> s4(-2);

    return 0;
}