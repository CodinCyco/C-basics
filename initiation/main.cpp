#include <iostream>
#include <sstream>
#include <cstdlib>
#include <string>
#include <vector>
#include <limits>

using namespace std;
int g_iRandNum = 0;
const double PI = 3.14159;
int main(int argc,char** argv) {

  /**
   * do g++ then do ./a.out and enter parameters
   */

  /*
   *

    if(argc!=1)
        cout << "parameters entered :" << argc << "arguments" <<endl;

    for(int i=0;i<argc;++i)
        cout << argv[i] << endl;

    bool bMarried = true;
    char chMyFrade = 'A';
    unsigned short int u16Age = 43;
    short int siWeight = 190;
    int nDays = 7;
    long lBigNum = 11000000;
    float fPi = 3.15159;
    double dbBigFloat = 1.111111111111111111111;
    long double ldPi = 3.14159;
    auto whatWillIBe = true;
    cout << "min bool :"
    << numeric_limits<double>::max() << endl;
    cout << "Max bool :"
    << numeric_limits<bool>::max() << endl;
    string sQuestion("Enter number");
    string num1,num2;
    cout << sQuestion;
    getline(cin,num1);
    cout << sQuestion;
    getline(cin,num2);
    int n = stoi(num1);
    int m = stoi(num2);
    cout << n+m<<endl;
    cout << n*m;
    */

    int miles = 0;

    cout << "Enter number of miles";
    cin >> miles;
    cout << miles << " in kilometers is equal to :" << miles*1.6;
    return 0;

}