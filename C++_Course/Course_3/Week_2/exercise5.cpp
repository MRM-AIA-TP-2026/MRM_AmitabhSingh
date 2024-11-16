#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

//add function definitions below this line
int GetMax(vector<int>& vec,int i=0)
{
 int l=vec.size();
 if(i==l-1)
   return vec[i];
 return max(vec[i],GetMax(vec,i+1));
}


//add function definitions above this line

int main(int argc, char** argv) {
  vector<int> nums;
  for (int i = 1; i < argc; i++) {
    nums.push_back(stoi(argv[i]));
  }
  cout << GetMax(nums) << endl;
  return 0;
}

