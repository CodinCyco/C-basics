#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;
int main() {
    cout << "Hello, pointers and functions" << endl;
    vector<int> myVec(10);
    iota(begin(myVec),end(myVec),0);
    for (int i = 0; i < myVec.size(); ++i) {
        cout << myVec[i]<<endl;
    }
cout << "================"<<endl;
    for(auto y:myVec)
    {
        if(y%2==0)
            cout<<y<<" is even." <<endl;
        else
            cout<<y<<" is odd." <<endl;
    }
    return 0;
}
