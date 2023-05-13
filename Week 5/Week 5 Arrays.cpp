#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  srand(time(0));
  
  cout << rand();

  for (int i = 0; i < 10; i++){
    cout << rand() % 10 + 1 << "\n";
  }

  //an array can only hold one type of variable at a time.

  string favGame[50];
  int index = 0;

  while(true){
    cout << "\nWhat would you like to do?\n";
    cout << "Type 'quit' to quit\n";
    cout << "Type 'add' to add a game\n";
    cout << "Type 'show' to show the array of games\n";
    cout << "Type 'edit' to edit your last inputted game\n";

    string input;
    cin >> input;

    if(input == "quit"){
      cout << "Thanks for playing!\n";
      break;
    }

    if (input == "add"){
      cout << "\nWhat games would you like to add?\n";
      for (int i = 0; i < 100; i++){
        cin >> input;
        if (input == "quit"){
          break;
        }
        favGame[index] = input;
        index++;
      }

    }

    if(input == "show"){
      cout << "\nThese are your favorite games:\n";
      for(int i = 0; i < index; i++){
        cout << favGame[i] << "\n";
      } 
    }

    if (input == "edit"){
      cout << "Please re-enter last game name.\n";
      cin >> input;
      favGame[index - 1] = input;
    }

    if (input == "find"){
      cout << "What game would you want to edit?\n";
      cin >> input;
      for (int i = 0; i < index; i++){
        if (favGame[i] == input){
          cout << "Got it!\n";
          cout << "What do you want to change this to?\n";
          cin >> input;
          favGame[i] = input;
        }
      }
    }
  }

  
}