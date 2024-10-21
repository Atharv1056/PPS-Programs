#include<fstream>
#include <iostream>
using namespace std;

int main() 
{
    ifstream inputfile("2.txt");
    ofstream outputfile("2.txt");
    fstream file("2.txt", ios::in|ios::out);
     return 0;
}