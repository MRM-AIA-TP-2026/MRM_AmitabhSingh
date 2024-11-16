#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line
int len=my_string.length();
for(int i=0;i<len;i++)
{
  for(int j=0;j<len;j++)
  {
    cout<<my_string;
  }
  cout<<endl;
}


  //add code above this line
  
  return 0;
  
}
