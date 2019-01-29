#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>
using namespace std;
int main() {

    int i=0;
    int j=1;
    int l;
    cin >> l;
    string res="";
    string t;
    cin >> t;
    while(i<l){
        res += t[i];
        i+=j;
        j++;
    }
    cout << res;
    return 0;
}
