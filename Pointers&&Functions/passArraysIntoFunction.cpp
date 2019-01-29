#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
void doubleArray(int* array,int size);
using namespace std;
int main() {

    int size = 5;
    int array[5] = {1,2,3,4,5};
    doubleArray(array,size);

    for(auto x:array)
        cout << x<<endl;


    return 0;
}
void doubleArray(int* array,int size){
    for (int i = 0; i < size; ++i) {
        array[i] = array[i] * 2;
    }
}



