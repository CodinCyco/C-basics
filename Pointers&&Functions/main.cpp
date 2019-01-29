#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;
vector<int> range(int start,int finish,int step);
int main() {
    vector<int> vector1 = range(1,10,2);
    for (int i = 0; i < vector1.size(); ++i) {
        cout << vector1[i]<<"\n";
    }
    return 0;
}

vector<int> range(int start,int finish,int step){
    int x = start;
    vector<int> resVector;
    while (x<=finish){
        resVector.push_back(x);
        x+=step;
    }
    return resVector;
}



