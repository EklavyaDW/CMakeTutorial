#include <iostream>
#include "calci/calculator.h"

using namespace std;

calculator::calculator()
{
    cout <<"Constructor called:::" <<endl;
}

calculator::~calculator()
{
    cout <<"Destructor called:::" <<endl;
}

int calculator::AddTwoNumbers(int x, int y)
{
    return x+y;
}