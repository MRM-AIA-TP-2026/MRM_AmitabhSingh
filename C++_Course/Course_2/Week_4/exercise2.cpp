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
 double arr[3][4];
 double avg=0.0;
 string read;
 ifstream file;
 file.open(path);
 for(int i=0;i<3;i++)
 {  
    getline(file,read);
    stringstream ss(read);
    string value;
    for(int j=0;j<4;j++)
    {  
       getline(ss,value,',');
       double a=stod(value);
       arr[i][j]=a;
    }
 }
 file.close();
 for(int i=0;i<4;i++)
 { 
   avg=0.0;
   for(int j=0;j<3;j++)
   {
     avg=avg+arr[j][i];
   }
   avg=avg/3.0;
   cout<<avg<<" ";
 }


  //add code above this line
  
  return 0;

}

