#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream datafile;
    char name[81];
    datafile.open("demoname.txt",ofstream::in|ofstream::trunc);
    datafile.close();
    return 0;
}
