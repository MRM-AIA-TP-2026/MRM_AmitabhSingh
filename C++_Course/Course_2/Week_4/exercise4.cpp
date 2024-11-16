#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
  string path = argv[1];        //
//////////////////////////////////  
  
  //add code below this line
  ifstream file;
  file.open(path);
  string oldestPerson;
  int maxAge=-1;
  string line;
  while((getline(file,line)))
  {
    stringstream ss(line);
    string name;
    int age;
    if(getline(ss,name,'\t')&& ss>>age)
    {
       if(age>maxAge)
       {
         maxAge=age;
         oldestPerson=name;
       }
    }
  }
  file.close();
  
    cout<<" The oldest person is "<<oldestPerson<<endl;
  


  //add code above this line
  
  return 0;
  
}

