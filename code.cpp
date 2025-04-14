#include <iostream>
#include <cmath>
#include <stdio.h>
#include "pineapple.h"
using namespace std;
int Cal(int first, char x, int second)
{
    switch (x)
    {
        case '+': 
        return Sum(first, second); 
        break;
        case '-': 
        return Raz(first, second); 
        break;
        case '*': 
        return Umn(first, second); 
        break;
        case '/':
        return Del(first, second); 
        break;
        default:
        cerr << "Neverno" << endl;
    }
    return 0;
}
int main(int argc, char** argv)
{
    if (argc = 3)
    {
        int first = atof(argv[1]);
        int second = atof(argv[3]);
        char x = argv[2][0];
        int result = Cal(first,x,second);
        cout << "Polu4ilos: " << first << " " << x << " " << second << " =" << " " << result;
    }
    return 0;
}