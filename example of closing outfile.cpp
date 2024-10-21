#include<fstream>
#include <iostream>
using namespace std;

int main() 
{
    ofstream outfile("2.txt");
    if (outfile.is_open())
    {
      outfile<<"Hello,World\n";
      outfile<<"This is a text file in C++\n";
      outfile.close();
      cout<<"Data written to file successfully:"<<endl;
    }
    else
    {
      cout<<"Error:Could not open the file."<<endl;
    }
    return 0;
}