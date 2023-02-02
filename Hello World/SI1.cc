// Name : Hello.cpp
// Author : Liya Patel
// Version : 
// Copyright : Copyright notice
// Description : Hello World in C++, Ansi- Style

#include <iostream>
using std::cout;

int main() {
    int x, y;
    cout << "Enter two numbers " << std::endl;
    std::cin >> x >> y;
    cout << static_cast<double>(x)/y << std::endl;

    x < y ? (cout<< "x bigger") : (cout << "y bigger");//will act as a condensed if statement 
    while(x>=0){
        //put switch statement there and read it in
    }
    switch(x) 
    {
        case 0:
            break;

        default:
            break;
    }

    if (x < y) { 

    }
    return 0;
}