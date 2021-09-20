#include <iostream>
const double PI = 3.141592653589793;
template <class T>
int getNum(T& a)
{
    while (true)
    {
        std::cin >> a;
        if (!std::cin.good())
        {
            std::cout << "You are wrong; repeat please!" << "--> ";
            std::cin.clear();
            std::cin.ignore(32767, '\n');
        }
        else
            return a;
    }
}

class CisoidaDiokla
{
private:
    float a;
    float x;
    float angle;

public:
    CisoidaDiokla() 
    {
        x = 0;
        a = 0;
    }
    CisoidaDiokla(float xvalue, float avalue, float anglevalue) {
        x = xvalue;
        a = avalue;
        angle = anglevalue;
    }
    float printypox() const;
    float rastdochentra() const;
    float printkoef() const;
    double printsquare() const;
    double printvolume() const;
    float printparabolickoef() const;
    float getx() const;
    float geta() const;
    float getangle() const;
};
