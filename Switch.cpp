#include<iostream>
#include<fstream>
using namespace std;
int main (){
    ofstream my_file ("abc.txt", ios::app);
    if(!my_file) {
        cout << "Failed to Open" << endl;
        return 1;
    }
    my_file << "Line 4" << endl;
    my_file << "Line 5" << endl;
    my_file << "Line 6" << endl;

    my_file.close();
    return 0;
}