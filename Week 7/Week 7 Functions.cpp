#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Return type, name, (input), (code)
//Defining a function that returns nothing,
//named "welcome", with no input parameters
void welcome(){
  cout << "Hello World!\n";
}

void welcome(string message){
  cout << message << "\n";
}

//Sides has a default value of 6, so if an amount isn't given, sides = 6
int rollDie(int sides = 6, int min = 1){
  return rand() % sides + min;
}

//Build a funtion that asks for a specific user input and loops until it gets it
//Make it return a boolean
bool askYN(string question = "Keep playing? (y/n)\n"){
  while(true){
    cout << question;
    char input;
    cin >> input;



    if (input == 'y'){
      return true;
    }
    else if (input == 'n'){
      return false;
    }
  }
}

int main() {
  srand(time(0));
  //Calls the welcome()function
  welcome();
  welcome("hello there");

  int roll = rollDie();
  cout << "Your die roll is " << rollDie(44) << ".\n";
  cout << "Your die roll is " << rollDie(10) << ".\n";
  cout << "Your die roll is " << rollDie(15) << ".\n";
  cout << "Your die roll is " << rollDie(20) << ".\n";
  cout << "Your die roll is " << rollDie(2000, 1000) << ".\n";

  if(askYN() == true){
    cout << "Alright, let's keep going!\n";
  }
  else{
    cout << "Thanks for playing!\n";
  }

  if(askYN("Should we go left?\n")){
    cout << "Alright, to the left it is!\n";
  }
  else{
    cout << "I wouldn't reccomend going that way, but...\n";
  }
  askYN("Should we turn the lights on?\n");
}