#include <iostream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

using namespace std;
int main() {
  vector<int> vectorRandNums(2);
  vectorRandNums[0] = 10;
  vectorRandNums[1] = 20;
  vectorRandNums.push_back(30);
  cout<<"last index : "<< vectorRandNums[vectorRandNums.size()-1]<<endl;

  string sentence = "this is a random string";
  vector<string> vectorWords;
  stringstream sentenceStream(sentence);
  string single;
  while(getline(sentenceStream,single,' ')){
      vectorWords.push_back(single);
  }
    for (int i = 0; i < vectorWords.size(); ++i) {
        cout << vectorWords[i] << "\n";
    }

return 0;
}
