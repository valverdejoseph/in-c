//Pointer is a variable that stores address of another variable.
#include <stdio.h>
#include <stdlib.h>
int main(){
  int a;
  char c;
  a=4;
  a++;
  int *p; //declaration of pointer, '*' denotes it
  p=&a; //'&' return the address of the variable
  //Now p has the value 504 (or address of a (&a))
  //&p has the value 508 (or address of p)
  //*p has the value 5 (or value in address of value of p), this access is called Dereferencing
/*
  RAM Memory
 [          ] 513... - this cell is about 1 byte and has an address.
 [          ] 512
 [    504   ] 511*i to store variable '*p'
 [    504   ] 510*i to store variable '*p'
 [    504   ] 509*i to store variable '*p'
 [    504   ] 508*i to store variable '*p'
 [     5    ] 507i to store variable 'a'
 [     5    ] 506i to store variable 'a'
 [     5    ] 505i to store variable 'a'
 [     5    ] 504i to store variable 'a'
 [          ] 503c to store variable 'c'
 [          ] 0...
 To store variables:
  int & float: 4B
  char: 1B
 There is a table in the computer that has the variables and their info:
  a int   504
  c char  503
  p int*  508
*/
  *p=8; //Now this modify the value in the address of value of p (a=8)
  /*
  In other words,
  p stores the address of another variable.
  *p accesses the value at this address.
  */
  return 0;
}

