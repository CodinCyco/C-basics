#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>
using namespace std;
int main() {
    int guess,attempts=0;
    srand(time(NULL));
    int rand = std::rand() % 11;
    do{
        attempts++;
        cout << "guess the number :"<<endl;
        cin >> guess;
        if(guess > rand)
            cout << "try less!"<<endl;
        if (guess < rand)
            cout << "try greater!"<<endl;


    }while(guess!=rand);
    cout << "Done , guessed in "<<attempts<<" attempts";
    cout << "\n "<<rand;
    return 0;
}