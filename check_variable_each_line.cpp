#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main(){
    ifstream FileReader("text.txt");
    string checkvar1;
    string checkvar2;
    string checkvar3;
    cout<< " enter var 1  : " <<endl;
    cin >> checkvar1;
    cout<< " enter var 2  : " <<endl;
    cin >> checkvar2;
    cout<< " enter var 3  : " <<endl;
    cin >> checkvar3;
    string line;
    bool matched = false;
    while(getline(FileReader, line)){
        if((checkvar1+"|"+checkvar2+"|"+checkvar3)==line){
            matched = true;
            break;
        }
    }
    if(matched){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
}