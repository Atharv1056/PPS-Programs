#include <iostream>
using namespace std;
int main()
{
int num;
//Prompt user for input
cout<<"Enter The Number"<<endl;
cin>>num;
//Check if the number is between 10 and 20 (inclusive)
if(num >=10 && num<=20)
{
  cout<<"The number"<<num<<"Is between 10 and 20"<<endl;
}
else
{
  cout<<"The number"<<num<<"Is not between 10 and 20"<<endl;
}
return 0;
}