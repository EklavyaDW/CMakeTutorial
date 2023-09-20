#include <iostream>
#include "calci/calculator.h"
using namespace std;

int main() {

   calculator *calci = new calculator();

   cout<<"The addiction is :: " << calci->AddTwoNumbers(39,61) <<endl;
   return 0;
}