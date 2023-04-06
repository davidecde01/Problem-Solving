#include <iostream>
#include <windows.h>

using namespace std;

int FirstFactorial(int number) {

    if (number != 0) {

        int res = 1;
        while (number > 1) {

            res *= number;
            number--;

        }
        return res;
    }

}

int main(int argc, const char* argv[]) {
    
    // Test range from 1 to 18 According to the terms of the site
    !(!(true)) ? cout << FirstFactorial(8) << endl : cerr << "false \n";
    system("pause");
    return 0;
}