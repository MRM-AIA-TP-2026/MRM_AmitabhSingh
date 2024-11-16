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
  int ch=0;
  int lines=0;
  string stream;
  ifstream file;
  file.open(path);
  while(getline(file,stream))
  {lines++;
    ch=ch+stream.length(); 
  }
  file.close();
  cout<<lines<<" line(s)"<<endl;
  cout<<ch<<" character(s)"<<endl;
 

  
  //add code above this line
  
  return 0;
  
}
