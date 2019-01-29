#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>
using namespace std;
int main() {
    string input;
    cout << "give a string : "<<endl;
    cin >> input;

    for (int i = 0; i < input.length(); ++i) {
        cout << (int) input[i];
    }
    return 0;
}