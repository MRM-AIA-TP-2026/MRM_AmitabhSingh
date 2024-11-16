#include <iostream>
#include <vector>
using namespace std;

//add function definitions below this line
int ListSum(vector<int>& a,int l=0)
{
  if(l==a.size())
  return(0);
  return a[l]+ListSum(a,l+1);
}


//add function definitions above this line

int main(int argc, char** argv) {
  vector<int> nums;
  for (int i = 1; i < argc; i++) {
    nums.push_back(stoi(argv[i]));
  }
  cout << ListSum(nums) << endl;
  return 0;
}

