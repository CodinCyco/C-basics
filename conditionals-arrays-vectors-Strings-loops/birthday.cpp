#include <iostream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
using namespace std;
int main() {
    std::cout << "Hello, age" << std::endl;
    int age;
    bool isImportant;
    bool again = true;
    string rep;
    while(again){
        isImportant = false;
        cout << "Enter your age" << endl;
        cin >> age;
        if(age >=1 && age<=18)
            isImportant=true;
        else
        if(age == 21 || age == 50 || age > 60)
            isImportant = true;

        if(isImportant)
            cout << "Birthday important"<<endl;
        else
            cout << "Birthday not important"<<endl;

        cout << "Play again ? "<<endl;
        cin >> rep;
        if(rep == "yes")
            again = true;
        else
            again = false;
    }
return 0;
}
