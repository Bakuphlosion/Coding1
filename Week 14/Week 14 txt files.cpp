#include <iostream>
#include <fstream>          //ifstream (In from a file) and ofstream (out from a file)
using namespace std;

int main() {
  cout << "Getting started!\n";

  cout << "Let's save text to a file!\n";

  //create the file variable with ofstream
  ofstream file;
  //open file
  file.open("data.txt");
  //writing text to file
  file << "This text will be saved into the file\n";

  //let user decide what to save to the file
  while(true){
    cout << "What do you wanna say?\n";
    string input;
    getline(cin, input);
    if(input == "quit") break;
    file << input << "\n";
  }
  
  //close file so other programs can use it
  file.close();

  cout << "Done!\n";

  cout << "Let's read from our save.txt file.\n";
  // Create a string variable to hold each line
  string line;
  //create the file variable
  ifstream save("save.txt");

  //check to see if the file is open
  if (save.is_open()){
    while (getline(save, line)){
      cout << line << "\n";
    }
  }
  else{
    cout << "File could not be loaded\n";
  }
}