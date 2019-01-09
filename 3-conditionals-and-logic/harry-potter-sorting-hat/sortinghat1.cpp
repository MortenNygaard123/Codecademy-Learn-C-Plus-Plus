#include <iostream>

int main(){
  int griffendor = 0; 
  int hufflepuff = 0; 
  int ravenclaw = 0;
  int slytherin = 0;
  // The default value of an int is 0.
  
  int answer1, answer2, answer3, answer4;
  
  //----------INTRO------------
  std::cout << "\n\n";
  std::cout << "/////////////////////////////\n";
  std::cout << "//  The Sorting Hat Quiz!  //\n";
  std::cout << "/////////////////////////////\n\n";
  
  // ---------QUESTION 1------
  std::cout << "Sorting Hat: 'When you're dead, who do you want people to remember you as?'\n\n";
  std::cout << "1) The Good\n";
  std::cout << "2) The Great\n";
  std::cout << "3) The Wise\n";
  std::cout << "4) The Bold\n\n";
  
  std::cout << "Sorting Hat: 'What say you?'	";
  std::cin >> answer1;
  
  // ------RATE Q1------
  
  if (answer1 == 1){
    hufflepuff++;
  }
  else if (answer1 == 2){ 
    slytherin++;
  }
  else if (answer1 == 3){
    ravenclaw++;
  }  
  else if (answer1 == 4){
    griffendor++;
  }     
  else {
    std::cout << "Sorting Hat: 'That's wierd... \nI'm not really getting anything from this one?'\n'\n";
  } 
  
  // ------QUESTION 2------
  
  std::cout << "\n\nSorting Hat: 'Dawn or Dusk?'\n\n";
  std::cout << "1) Dawn\n";
  std::cout << "2) Dusk\n\n";
  
  std::cout << "Sorting Hat: 'What is your answer?'	";
  std::cin >> answer2;
  
  //------STORE Q2------
  
  if (answer2 == 1){
    ravenclaw++;
    griffendor++;
  }
  else if (answer2 == 2){ 
    slytherin++;
    hufflepuff++;
  }
  else {
    std::cout << "Sorting Hat: 'Wow... Can a mind be THIS  empty?'\n";
  } 
  
  // ------QUESTION 3------
  std::cout << "\n\n\nSorting Hat: 'Which kind of instrument most pleases your ear?'\n\n";
  std::cout << "1) The violin\n";
  std::cout << "2) The trumpet\n";
  std::cout << "3) The piano\n";
  std::cout << "4) The drum\n\n";
  
  std::cout << "Sorting Hat: 'Hmh?'	";
  std::cin >> answer3;
    
  // ------RATE Q3------
  
  if (answer3 == 1){
    slytherin++;
  }
  else if (answer3 == 2){ 
    hufflepuff++;
  }
  else if (answer3 == 3){
    ravenclaw++;
  }  
  else if (answer3 == 4){
    griffendor++;
  }     
  else {
    std::cout << "Sorting Hat: 'Amazing. Simply Amazing... \nI haven't read one thought in this guy's head?!?!'.\n";
  } 
  
  // ------QUESTION 4------
  std::cout << "\n\n\nSorting Hat: 'Which road tempts you most?'\n\n";
  std::cout << "1) The wide, sunny grassy lane\n";
  std::cout << "2) The narrow, dark, lantern-lit alley\n";
  std::cout << "3) The twisting, leaf-strewn path through woods\n";
  std::cout << "4) The cobbled street lined (ancient buildings)\n\n";
  
  std::cout << "Sorting Hat: 'Speak your mind!'\n\n";
  std::cin >> answer4;
    
  // ------RATE Q4------
  
  if (answer4 == 1){
    hufflepuff++;
  }
  else if (answer4 == 2){ 
    slytherin++;
  }
  else if (answer4 == 3){
    griffendor++;
  }  
  else if (answer4 == 4){
    ravenclaw++;
  }     
  else {
    std::cout << "\n";
  } 
  
  // ------SELECT HOUSE------
  int max = 0;
  std::string house;
   
  if(griffendor > max) {
    max = griffendor;
    house = "'GRIFFENDOR!'\n\n";
  }
  if(hufflepuff > max) {
    max = hufflepuff;
    house = "'HUFFLEPUFF!'\n\n";
  }
  if(ravenclaw > max) {
    max = ravenclaw;
    house = "'RAVENCLAW!'\n\n";
  }
  if(slytherin > max) {
    max = slytherin;
    house = "'SLYTHERIN!'\n\n";
  }
  if(max == 0){
    std::cout << "The Sorting Hat looks very confused and ashamed. 
    In a nervous voice it slowly stutters:\n\n'This one is truly a mystery to me. This person must be either 
    a complete master of clearing the mind, or severely mentally challenged. There's simply nothing here to 
    read. \nMerlin's beard!'\n\nThe Sorting Hat, in it's desperation, growns a pair of magical legs, and flees 
    the Great Hall in tears. It now lives out the rest of eternity with moaning Myrtle, consumed by the shame 
    and the grief that you've put upon it.\n\n";
  return 0;
  }
  std::cout << "\n\nThe Sorting Hat has made up it's mind and yells:\n\n		"<< house << "\n\n";
  
  return 0;
}
