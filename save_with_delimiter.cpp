#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main(){
    string var1,var2, var3;
    ofstream file("file.txt",ios::in | ios::app |ios::out);
    file<< var1 <<" "<< var2<<" "<< var3<<endl;
    return 0;
}
