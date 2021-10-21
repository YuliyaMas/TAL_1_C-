#include <iostream>
using namespace std;

int WordConteur(){
  int words = 0; // number of words
  for(int i = 0; text[i] != '\0'; i++)
  {
    if (text[i] == ' ') // for spaces
    {
      words++;
    }
  }
  cout << "The number of words = " << words+1 << endl;
}


int main() {
  char text[300];
  cout << "Enter a string: ";
  cin.getline(text,300);
  
  return 0;
}