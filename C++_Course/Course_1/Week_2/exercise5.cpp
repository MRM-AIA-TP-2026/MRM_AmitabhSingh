#include <iostream>
using namespace std;

int main() {
  
  string num1;
  string num2;
  cout << "Type the first whole number and then press Enter or Return: ";
  cin >> num1;
  cout << "Type the second whole number and then press Enter or Return: ";
  cin >>num2;
  
  //fix the code below this line

  int a=stoi(num1);
  int b=stoi(num2);
  int sum=a+b;
  cout <<num1<<" + "<<num2<<" = "<<sum<< endl;

  //fix the code above this line
  
  return 0;
  
}

