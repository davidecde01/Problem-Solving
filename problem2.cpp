#include <iostream>
#include <windows.h>

using namespace std;

string FirstReverse(string str) {

    reverse(str.begin(), str.end());
    return str;

}

int main(int argc, const char* argv[]) {

    cout << FirstReverse("hello, world") << endl; 
    system("pause");
    return 0;
}