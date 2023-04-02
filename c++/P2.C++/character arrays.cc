#include <iostream>
using namespace std;

int length(char input[]) {

}

int main(){
    char name[100];
    cout << "Enter your name :  ";
    cin >> name;
    name[4] = 'x';
    name[3] = 'd';
    name[1] =  '\0';
    cout << "Name : " << name << endl ;
}