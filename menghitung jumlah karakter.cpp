#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int ubah(const char *s){
  int x=0;
  for( ; *s != '\0'; s++)
  ++x;
  return x;
}
main(void) {
  char string[80];
  cout <<"Ketik sebuah karakter: "; 
  cin >> string;
  cout <<"\nTotal karakter = "<< ubah(string);
  getch();
}
