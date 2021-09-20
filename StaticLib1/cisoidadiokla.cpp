#include <iostream>
#include "CisoidaDiokla.h"
#include <cmath>
float CisoidaDiokla::printypox() const
{
    float y;
    y = sqrt(pow(x, 3) / (a - x));
    return y;
}
float CisoidaDiokla::rastdochentra() const
{
    float p = a * pow(sin(angle * PI / 180), 2) / cos(angle * PI / 180);
    return p;
}
float CisoidaDiokla::printkoef() const
{
    float koef = 2 * x;
    return koef;
}
double CisoidaDiokla::printsquare() const
{
    double S = 3 * PI * pow((a / 2), 2);
    return S;
}
double CisoidaDiokla::printvolume() const
{
    double V = 2 * pow(PI, 2) * pow((a / 2), 3);
    return V;
}
float CisoidaDiokla::printparabolickoef() const 
{
    float K = 2 *(a/2);
    return K;
}
float CisoidaDiokla::getx() const { return x; }
float CisoidaDiokla::geta() const { return a; }
float CisoidaDiokla::getangle() const { return angle; }
