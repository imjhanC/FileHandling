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
    string file_checkvar1,file_checkvar2,file_checkvar3,discard;
    bool matched = 0;
    FileReader >> file_checkvar1; // first variable
        while(FileReader){
            if(file_checkvar1 == checkvar1){
                FileReader >> file_checkvar2>>file_checkvar3; // LAST VAR
                matched = 1;
                break;
            }
            else{
                FileReader >> discard>> discard;
            }
        FileReader >> file_checkvar1;
        }
    if(matched  == 1){


    }
    else{
    }


    return 0;
}
