#include <iostream>
using namespace std;

//add function definitions below this line
string ReverseString(string st,int i=0)
{
  int l=st.length();
  if(i==l)
  return"";
  return (st.at(l-i-1)+ReverseString(st,i+1));
}


//add function definitions above this line

int main(int argc, char** argv) {
  cout << ReverseString(argv[1]) << endl;
  return 0;
}

