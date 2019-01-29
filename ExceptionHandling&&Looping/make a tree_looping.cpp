#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>
using namespace std;
int main() {
    string drawC;
    int treeLength;
    std::cout << "How tall is the tree ?" << std::endl;
    cin >> treeLength;
    cout << "draw with ? :" << endl;
    cin >> drawC;

    int spaces = treeLength - 1;
    int lastSpaces = spaces;
    int cNumber = 1;
    while (treeLength != 0){
        for (int j = 0; j < spaces; ++j) {
            cout << ' ';
        }
        for (int k = 0; k < cNumber; ++k) {
            cout << drawC;
        }
        cout << "\n";
        spaces--;
        cNumber+=2;
        treeLength--;
    }

    for (int i = 0; i < lastSpaces; ++i) {
        cout << ' ';
    }
        cout<<"||"<<endl;

    return 0;
}
