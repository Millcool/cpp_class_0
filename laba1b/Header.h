namespace Prog {
    const double PI = 3.141592653589793;

    template <class T>
    int getNum(T& a)
    {
        while (true) // цикл продолжается до тех пор, пока пользователь не введет корректное значение
        {
            std::cin >> a;
            if (!std::cin.good()) // обнаружена ошибка ввода или конец файла
            {
                std::cout << "You are wrong; repeat please!" << "--> ";
                std::cin.clear();
                std::cin.ignore(32767, '\n');
            }
            else // если всё хорошо, то возвращаем a
                return a;
        }
    }
    class CisoidaDiokla
    {
    public:
        float a;
        float x;
        int ygol;

        CisoidaDiokla() {
            std::cout << "Enter x: --> ";
            getNum(x);
            std::cout << "Enter a: --> ";
            getNum(a);
            std::cout << "Enter ygol: --> ";
            getNum(ygol);
        }
        CisoidaDiokla(float xvalue, float avalue, float ygolvalue) {
            x = xvalue;
            a = avalue;
            ygol = ygolvalue;
        }
        float printypox()
        {
            float y;
            if (x == 0) 
            {
                std::cout << "This is dot ! " << std::endl;
                return -2;
            }
            else if ((x > a) || ((x< 0) && (a-x) > 0))
            {
                std::cout << "y is not defined " << std::endl;
                return -1;
            }
            else
            {
                y = sqrt(x * x * x / (a - x));
                std::cout << "y = " << y << std::endl;
                return y;
            }

        }
        float rastdochentra()
        {
            if (x == 0) 
            {
                std::cout << "This is dot ! " << std::endl;
                return -2;
            }
            float p = a * sin(ygol * PI / 180) * sin(ygol * PI / 180) / cos(ygol * PI / 180);
            std::cout << "Rasstoyanie do centra = " << p << std::endl;
            return p;
        }
        float printkoef()
        {
            if (x == 0)
            {
                std::cout << "This is dot ! " << std::endl;
                return -2;
            }
            std::cout << "koef = 2 " << std::endl;
            return 2;
        }
        double printploshad()
        {
            if (x == 0) 
            {
                std::cout << "This is dot ! " << std::endl;
                return -2;
            }
            double S = 3 * PI * (a / 2) * (a / 2);
            std::cout << "S = " << S << std::endl;
            return S;
        }
        double printobem()
        {
            if (x == 0) 
            {
                std::cout << "This is dot ! " << std::endl;
                return -2;
            }
            if (x == a / 2) {
                std::cout << "V = INFINITY " << std::endl;
                return -1;
            }
            else {
                double V = 2 * PI * PI * (a / 2) * (a / 2) * (a / 2);
                std::cout << "V = " << V << std::endl;
                return V;
            }
        }
    };
}
