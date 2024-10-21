#include<fstream>
#include <iostream>
using namespace std;

int main() 
{
    ifstream infile("2.txt");
    string line;
    
    if (infile.is_open())
    {
      while (getline(infile,line)){
      cout<< line <<endl;
    }
    infile.close();
    }
    else
    {
      cout<<"Error:Could not open the file."<<endl;
    }
    return 0;
}