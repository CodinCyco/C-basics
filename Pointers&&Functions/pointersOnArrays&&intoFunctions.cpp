#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;
void assign(int* age);
int main() {



    int T[] = {1,2,3,4};
    int* pT = T;

    for(auto x:T){
        cout << "adress : "<< pT << " has : " << *pT<<endl;
        pT++;
    }

    /**
     * assign value to age throw pointer
     */
    int age = 43;
    int* pAge = &age;
    cout << "the value at the adress "<<pAge << "is : "<<*pAge<<endl;

    assign(pAge);

    cout << "age after assignment : " << age;
    return 0;
}

void assign(int* pAge){
    *pAge = 24;
}


