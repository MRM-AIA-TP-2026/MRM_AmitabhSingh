#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line
  
for(int i=0;i<my_string.length();i++)
{
  if(my_string[i]==' ')
  my_string.erase(i);

}
int l=my_string.length();
for(int i=0;i<l/2;i++)
  cout<<my_string.at(i);
cout<<endl;
for(int i=(l/2);i<l;i++)
cout<<my_string.at(i);
  //add code above this line
  
  return 0;
  
}
