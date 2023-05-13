#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <fstream>
using namespace std;

string favGame[50];
int index = 0;

void add(){
  string input;
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

void show(){
  cout << "\nThese are your favorite games:\n";
      for(int i = 0; i < index; i++){
        if (favGame[i] == ""){
          continue;
        }
        cout << favGame[i] << "\n";
      } 
}

void remove(){
  string input;
cin >> input;
  cout << "What game would you like removed?\n";
  for (int i = 0; i < index; i++){
    if (favGame[i] == input){
      cout << "Got it! Game removed!\n";
      favGame[i] = "";
        }
      }
}

void edit(){
  string input;
  
  cout << "What game would you want to ?\n";
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

void save(){
  ofstream file;
  file.open("favGames.txt");

  cout << "Saving list...\n";
  for (int i = 0; i < index; i++){
    string games;
    file << favGame[i] << "\n";

  }
  cout << "Saved!\n";
  file.close();
}

void load(){
  ifstream file;
  file.open("favGames.txt");

  string line;

  if(file.is_open()){
    while (getline(file, line))
      favGame[index++] = line;
  }
}


int main() {
  srand(time(0));

  while(true){
    cout << "\nWhat would you like to do?\n";
    cout << "You can type add, show, remove, edit, save, load, or quit.\n";


    string input;
    cin >> input;

    if(input == "quit"){
      cout << "Thanks for playing!\n";
      break;
    }

    if (input == "add"){
      add();
    }

    if(input == "show"){
      show();
    }

    if (input == "remove"){
     remove();
    }

    if (input == "edit"){
      edit();
      }

    if (input == "save"){
      save();
      }
    
    if (input == "load"){
      load();
      }
    
    }
  }