#include <iostream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

using namespace std;
int main() {
  string userInput;
  vector<string> vectorCalculator;
  string element;

    cout << "Enter an equation : (ex. 5 + 6) with spaces" << "\n";
    getline(cin,userInput);
    stringstream equationStream(userInput);
    while (getline(equationStream,element,' '))
    {
        vectorCalculator.push_back(element);
    }
    double x = stoi(vectorCalculator[0]);
    double y = stoi(vectorCalculator[2]);
    string op = vectorCalculator[1];
    if(op == "+")
        cout << x+y;
    else
        if(op =="-")
            cout << x-y;
        else
            if(op == "/")
                cout << x/y;
            else
                if(op == "*")
                    cout << x*y;
                else
                    cout << "please enter +,-,*,/ only ...";

return 0;
}