#include <iostream>
#include <string>
using namespace std;

int a(const string& s){
    cout << s << endl;
    return 0;
}

int main(){
    a("HI");
    string y = "YO";
    a("HI"+y);
}
