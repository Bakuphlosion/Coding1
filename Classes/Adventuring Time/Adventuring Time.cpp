#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int playerDamage;
int enemyHealth;

class enemy{
public:
  string name;
  int strength;
enemy(){
  name = "Huh?";
  enemyHealth = 5;
  strength = 0;
}

enemy(string givenName, int givenHealth, int givenStrength){
  enemyHealth = givenHealth;
  name = givenName;
  strength = givenStrength;
  status();
}

void status(){
  cout << name << "\nHP: " << enemyHealth << "  Strength: " << strength << "\n"; 
}


void attack(){
  int damage = strength + rand() % 10;
  if(damage > 0){
    cout << "\nThe " << name << " did " << damage << " damage!\n";
  }
  else{
    cout << "The " << name << "'s attack missed!";
  }  
}

void defend(){
  enemyHealth = enemyHealth -= playerDamage;
  if (playerDamage > 0){
    cout << "You did " << playerDamage << " damage to the " << name << "!\n";
    cout << name << " has " << enemyHealth << " health left!\n";
  }
  else if (playerDamage <= 0){
    cout << name << " blocked the attack!\n";
  }
}

};


int main() {
  srand(time(0));

  enemy slime("Slime", 10, 0);
  int turnCount;

  while(true){
    string input;
    playerDamage = rand() % 10;

    cout << "Venture forth? (y/n)\n";
    cin >> input;
    if (input == "y"){
      slime.attack();
      slime.defend();
    }
    else if (input == "n"){
      cout << "Understandable. Thanks for playing!\n";
      break;
    }

    if (enemyHealth <= 0){
      cout << "Enemy Defeated!\n";
      break;
    }
    turnCount += 1;
  }
   
  

  slime.status();
}