#include "question_3.h"
#include <iostream>

namespace Q3
{
    void prompt(float& x)
    {
        std::cout << "Enter a double value: ";
        std::cin >> x;
    }

    const char prompt()
    {
        std::cout << "Enter one of the following: +, -, *, or /: ";

        char ch{};
        std::cin >> ch;

        return ch;
    }

    void question3()
    {
        float a{};
        float b{};

        prompt(a);
        prompt(b);

        const char op = prompt();

        float res{};

        switch (op)
        {
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b;
            break;
        case '*':
            res = a * b;
            break;
        case '/':
            res = a / b;
            break;
        default:
            return;
        }

        std::cout << a << ' ' << op << ' ' << b << " is " << res << '\n';
    }
}