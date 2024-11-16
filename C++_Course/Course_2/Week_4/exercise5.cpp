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
 string line;
 cout<<"The following cities are in the Southern Hemisphere: ";
 file.ignore(32);
 int c=0;
 int l=0;
 while(getline(file,line))
 {  
    stringstream ss(line);
    string city;
    string latitudeStr;
    string country;
    string longitude;
    if(getline(ss,city,',') && getline(ss,country,',') && getline(ss,latitudeStr,',') && getline(ss,longitude))
    { 
       int latitude=stoi(latitudeStr);
       if(latitude<0)
       {
        c++;
       }
    }
 }
 file.close();
 ifstream files;
 files.open(path);
 files.ignore(32);
 while(getline(files,line))
 {
    stringstream ss(line);
    string city;
    string latitudeStr;
    string country;
    string longitude;
    if(getline(ss,city,',')&&(getline(ss,country,',')&&getline(ss,latitudeStr,',')&& getline(ss,longitude)))
    {
      int latitude=stoi(latitudeStr);
      if(latitude<0)
      {
        l++;
        if(l==c)
        cout<<city<<"."<<endl;
        else
        cout<<city<<", ";
      }
    }
 }
 files.close();


  //add code above this line
  
  return 0;
  
}

