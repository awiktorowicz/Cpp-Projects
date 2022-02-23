/*
Simple program to create a new profile with some information,
add hobbies, view profile.
*/

#include <iostream>
#include "profile.hpp"

int main() {

  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
  sam.add_hobby("Listening to audiobooks and podcasts.");
  sam.add_hobby("Writing a speculative fiction novel.");
  sam.add_hobby("Playing rec sports like bowling and kickball.");

  std::cout << sam.view_profile();
  
}