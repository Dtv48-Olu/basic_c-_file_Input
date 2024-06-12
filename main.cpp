// The following project is pratice for file input and output in c++
#include <fstream>
#include <iostream>

int main() {
  using namespace std;

  // variables
  string filename;
  string user_name;
  int data_one;
  double data_two;

  cout << "Hello user, please input your name in the command line!" << endl;

  cin >> user_name;
  cout << "\n";
  cout << "Hello " << user_name
       << " I want you input some data to play around wiht files." << endl;
}