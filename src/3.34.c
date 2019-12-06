/*

3.34
(Hollow Square of Asterisks) Modify the program you wrote in Exercise 3.33 so that it
prints a hollow square. For example, if your program reads a size of 5, it should print

*****
*   *
*   *
*   *
*****

*/

/*
Explanation : To solve this exercise in the right-way you have to image the square like
a big chessboard, in the foursides you have to fill with "*" and inside with " " so,
let's assume that my square have size 5, so my chessboard will be:

1,1   1,2 1,3 1,4   1,5

2,1   2,2 2,3 2,4   2,5
3,1   3,2 3,3 3,4   3,5
4,1   4,2 4,3 4,4   4,5

5,1   5,2 5,3 5,4   5,5

Once you understand how you can create the patter with innested if-cases
for all sides and spaces inside the square the exercise is pretty done!



*/

#include <stdio.h>

int main ()

{

  int SideSquare   = 0,     /* size of sides sqare */
      raw          = 1,     /* here is stored rows value */
      column       = 1;     /* here is stored columns value */

  printf("\nInsert side square : "); scanf("%d", &SideSquare);

  /* while-loop end when columns value is bigger than SideSquare value*/
  
  while(raw <= SideSquare ) {
/* The inner While-loop print the all sides of the square*/
    while(column <= SideSquare) {

      /* print left side */
    if(raw > 1)
      if(column == 1)
            printf("*");

      /* print right side */
    if(raw > 1)
      if(column == SideSquare)
          printf("*");

      /* print upperside */
       if(raw == 1)
        if(column >= 1)
          printf("*");

      /* print downside */
       if(raw == SideSquare)
        if(column > 2) /* if column check from 1 we will have duplicated "*" so */
            printf("*");

      /* print blank space inside hollow square */
      if(raw >= 2)
        if(column >= 2)
          if(raw <= SideSquare - 1)
            if(column <= SideSquare - 1)
                              printf(" ");

      column++;
    
    } 
      /* columns value have to restart from value 1 untill main while-loop is ended*/
      column = 1;

      raw++;
      /* print a new line of square */
      printf(" \n");

  }

return 0;

}

/**************************************************************************
 * (C) Copyright 2019 by bikerinside                                      *
 *                                                                        *                                                  *
 * DISCLAIMER:                                                            *
 * The author make no warranty of any kind, expressed or implied,         *
 * with regard to these programs.                                         *
 * The author shall not be liable in any event for incidental or          *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/