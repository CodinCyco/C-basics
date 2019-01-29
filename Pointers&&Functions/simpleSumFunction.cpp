#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;
double sum(double x, double y);
int main() {
    double x,y;
    cout << " enter two numbers "<<endl;
    cin>>x>>y;

    cout <<"the sum of "<< x << " and "<<y<<" is = "<< sum(x,y);
    return 0;
}

double sum(double x, double y){
    return x+y;
}
