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
  cout << "Hello " << user_name;
  cout << " I want you input some data to play around wiht files." << endl;

  // File streame created
  ofstream input_file; // For some reason I always got confused between ofstream
                       // and ifstream and what's the input file and what's the
                       // output file
  cout << "User please provide name for the file" << endl;
  cin >> filename;
  input_file.open(filename);
  cout << "Now that a file has been created we must fill it with data!" << endl;
}