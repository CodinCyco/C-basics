#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>
using namespace std;
int main() {
    double num1,num2;
    cout << "Give two numbers : ";
    cin >> num1 >> num2;

    try {
        if (num2 == 0)
            throw "can't devide by 0 ";
        else
            printf("%.1f / %.1f = %.2f",num1,num2,num1/num2);
    }catch (const char* ex){
        cout << ex;
    }


    return 0;
}
