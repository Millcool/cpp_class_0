#include <iostream>
#include <cmath>
#include "../StaticLib1/cisoidadiokla.h"
int main()
{
    float a, x, angle;

    std::cout << "Enter x: --> ";
    getNum(x);
    std::cout << "Enter a: --> ";
    getNum(a);
    std::cout << "Enter angle: --> ";
    getNum(angle);
    if (x != 0)
    {
        CisoidaDiokla Krivaya(x, a, angle);
        if ((x > a) || ((x < 0) && (a - x) > 0))
        {
            std::cout << "y is not defined " << std::endl;
        }
        else { std::cout << "y = " << Krivaya.printypox() << std::endl; }

        std::cout << "Distance to the center = " << Krivaya.rastdochentra() << std::endl;
        std::cout << "Koefficient = "<< Krivaya.printkoef() << std::endl;
        std::cout << "S = " << Krivaya.printsquare() << std::endl;
        if (x == a / 2) {
            std::cout << "V = INFINITY " << std::endl;
        }
        else { std::cout << "V = " << Krivaya.printvolume()  << std::endl; };
        std::cout << "Koefficient in the parabolic equation = " << Krivaya.printparabolickoef() << std::endl;
    }
    else
    { std::cout << "This is a dot ! " << std::endl; }
    
}