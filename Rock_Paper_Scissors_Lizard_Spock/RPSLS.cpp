/*
Rock Paper Scissors Lizard Spock
(The Big Bang Theory)
*/

#include <iostream>
#include <cstdlib>
#include <stdlib.h>
int main() {

  //User Input, Computer Choice
  int computer = rand() % 3 + 1;
  int user;

  //User interface
  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";
  std::cout << "4) lizard\n";
  std::cout << "5) spock\n\n";

  std::cout << "shoot: ";
  
  //Choices
  int rock = 1;
  int paper = 2;
  int scissors = 3;
  int lizard = 4;
  int spock = 5;
  
  //User input
  std::cin >> user;
  
  /* RULES
  rock > scissors
  scissors > paper
  paper > rock
  lizard > spock
  spock > scissors
  scissors > lizard
  lizard > paper
  paper > spock
  spock > rock
  rock > lizard
  */
  
  //Computer's choice
  std::cout << "computer: " << computer << "\n\n";
  
  if (user == rock && computer == scissors) {
      
    std::cout << "You Win!\n";
    
  } else if (user == scissors && computer == paper) {
    
    std::cout << "You Win!\n";
    
  } else if (user == paper && computer == rock) {
    
    std::cout << "You Win!\n";
      
  } else if (user == lizard && computer == spock) {
      
    std::cout << "You Win!\n";
      
  } else if (user == spock && computer == scissors) {
      
    std::cout << "You Win!\n";
      
  } else if (user == scissors && computer == lizard) {
      
    std::cout << "You Win!\n";
      
  } else if (user == lizard && computer == paper) {
      
    std::cout << "You Win!\n";
      
  } else if (user == paper && computer == spock) {
      
    std::cout << "You Win!\n";
      
  } else if (user == spock && computer == rock) {
      
    std::cout << "You Win!\n";
      
  } else if (user == rock && computer == lizard) {
      
    std::cout << "You Win!\n";
      
  } else if (user == computer) {
      
    std::cout << "Tie!\n";
      
  } else {
      
    std::cout << "You Lose!\n";
      
  }
}