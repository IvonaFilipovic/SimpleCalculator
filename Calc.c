#include <stdio.h>

int main()
{
  char opr, ch;
  float n1, n2, r;
    do {
    //Prompting the user to enter their expression
printf("Enter the expression you want to calculate:\n");
    //Scanning and inputting the values
scanf("%f %c %f", &n1, &opr, &n2);
//Starting the switch statement
  switch(opr)
    {
      //Case if the user enters a + (addition)
    case '+':
            r = n1 + n2;
            printf("%0.0f + %0.0f = %0.0f \n", n1, n2, r);


      break;
      //Case if the user enters a - (subtraction)
    case '-':
           r = n1 - n2;
           printf("%0.0f - %0.0f = %0.0f \n", n1, n2, r);
      break;
      //Case if the user enters a * (multiplication)
    case '*':
            r = n1 * n2;
           printf("%0.0f * %0.0f = %0.0f \n", n1, n2, r);
      break;
      //Case if the user enters a / (division)
    case '/':
            r = n1 / n2;
            //Checking if the divisor is 0.
            if (n2 != 0)
            printf("%0.0f / %0.0f = %0.2f \n", n1, n2, r);
            else
                //Displaying error message if the divisor is 0.
            printf("Error! Cannot divide by zero\n");

      break;

    default:

      // Displaying error message if the operator is not one of: +,-,*,/.
        printf("Error! Wrong operator used, try again.\n");
      break;
    }
        //Prompting the user to enter Q to quit the application
        printf ("Do you want to do another calculation Y/N?\n");
                scanf (" %c", &ch);
    }
    while (ch =='y' || ch == 'Y');


        return 0;
    }

