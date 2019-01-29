#include <iostream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

using namespace std;
int main() {
  cout << "Students division !" <<endl;
  cout << "*************************" <<endl;
    string studentName;
    int studentAge;
    string studyPlace;
    int n;
    cout<< "how many children do you have ? "<< endl;
    cin >> n;
    string students[n];
    for (int i=0;i< sizeof(students)/ sizeof(students[0]);i++){
        cout<<"child number :" << i+1 << endl;
        cout << "*************************" <<endl;
        cout << "Enter child name : "<<endl;
        cin >> studentName;
        cout << "child age :" <<endl;
        cin >> studentAge;
        if(studentAge < 6)
            studyPlace = "Kinder garden";
        else
        if(studentAge >5 && studentAge < 13)
            studyPlace = "School";
        else
        if(studentAge > 12 && studentAge < 18)
            studyPlace = "college";
        else
            studyPlace = "University";
        students[i] = studentName + " is going to " + studyPlace;
    }

    for (int j = 0; j <sizeof(students)/ sizeof(students[0]); ++j) {
        cout << students[j]<<endl;
    }
return 0;
}
