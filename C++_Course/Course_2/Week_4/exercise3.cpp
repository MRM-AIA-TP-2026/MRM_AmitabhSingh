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
 vector<string> lines;
 string line;
 while(getline(file,line))
 {
   lines.push_back(line);

 }
 file.close();
 for(auto it=lines.rbegin();it!=lines.rend();++it)
 {
    cout<<*it<<endl;
 }




  //add code above this line
  
  return 0;
  
}

