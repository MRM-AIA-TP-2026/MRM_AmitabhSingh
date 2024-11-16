#include <iostream>
#include <vector>
using namespace std;

//add code below this line
bool IsPalindrome(string a)
{
  int l=a.length();
  string b;
  for(int i=0;i<l;i++)
  {
    if(a[i]!=a[l-i-1])
      return false;
  }
  return true;
}


//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  cout << boolalpha << IsPalindrome(x) << endl;
}
