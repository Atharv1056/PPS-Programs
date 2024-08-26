#include <iostream>
using namespace std;
int main()
{
int number;
// Prompt user for input
cout << "Enter a number"<<endl;
cin >> number;
// Check if the number is positive or negative
    if (number>= 0) 
    {
     cout << "The number"<<number<<"is positive"<<endl;
    } 
    else
    {
     cout << "The number"<<number<<"is negative"<<endl;
    } 
  return 0;
}
