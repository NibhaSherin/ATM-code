
#include <stdio.h>
#include<string.h>


struct employee
{
  int pin;
  int acc;
  char name[20];
  float balance;
} e[100];

int anotherTransaction;
void transaction ()
{
  int choice, index, accnum, pinnum;
  scanf ("%d%d", &accnum, &pinnum);
  for (int i = 0; i <= 100; i++)
    {
      if (e[i].acc == accnum && e[i].pin == pinnum)
	index = i;
      break;
    }
  printf ("Welcome %s!!!", e[index].name);
  printf ("\nEnter any option given below!!\n\n");
  printf ("1.Withdraw\n");
  printf ("2.Deposit\n");
  printf ("3.Balance\n");
  scanf ("%d", &choice);
  /*int a,b,c,rs;
  rs=e[index].balance;*/
  int amountToWithdraw;
  int amountToDeposit;
  switch (choice)
    {
    case 1:
      printf ("Please enter amount to withdraw");
      scanf ("%d", &amountToWithdraw);
      if (amountToWithdraw > e[index].balance)
	{
	  printf ("There is no sufficient funds in your account");
	  printf  ("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n");
	  scanf ("%d", &anotherTransaction);
	  if (anotherTransaction == 1)
	    {
	      transaction ();
	    }
	}
      else
	{
	  e[index].balance = e[index].balance - amountToWithdraw;
	  printf ("you have withdrawn %d and your new balance is %f", amountToWithdraw, e[index].balance);
	  printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n");
	  scanf ("%d", &anotherTransaction);
	  if (anotherTransaction == 1)
	    {
	      transaction ();
	    }
	}
      break;
    case 2:
      printf ("Please enter amount to deposit");
      scanf ("%d", &amountToDeposit);
      e[index].balance = amountToDeposit + e[index].balance;
      printf ("Thank you for depositing,new balance is %f", e[index].balance);
      printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n");
      scanf ("%d", &anotherTransaction);
      if (anotherTransaction == 1)
	{
	  transaction ();
	}
      break;
    case 3:
    
        /*while(rs >= 2000)
        {
            c = rs / 2000 ;
            printf("\nThe no. of five hundreds are : %d", c) ;
            break ;
        }
        while(rs >= 500)
        {
            a = rs / 500 ;
            printf("\nThe no. of five hundreds are : %d", a) ;
            break ;
        }
        while(rs >= 100)
        {
            b = rs / 100 ;
            printf("\n\nThe no. of hundreds are : %d", b) ;
            break ;
        }*/
          printf ("Your bank balance is %f", e[index].balance);
          printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n");
          scanf ("%d", &anotherTransaction);
          if (anotherTransaction == 1)
    	{
    	  transaction ();
    	}
          break;
        }
}

int main ()
{

  int no1, no2, no3;
  printf ("Enter the currency uploaded\n");
  scanf ("%d%d%d", &no1, &no2, &no3);
  printf ("TASK 1\n");
  printf ("ATM DENOMINATION\n");
  printf ("Currency | Number | Value\n");
  printf ("2000     | %d     | %d\n", no1, 2000 * no1);
  printf ("500      | %d     | %d\n", no2, 500 * no2);
  printf ("100      | %d     | %d\n", no3, 100 * no3);
  printf ("TASK 2\n");
  printf ("CUSTOMER DETAILS\n");
  printf ("Acc | AccHol | PinNo| AccBal\n");
  printf ("101 | Suresh | 2343 | 25,234\n");
  printf ("102 | Ganesh | 5432 | 34,123\n");
  printf ("103 | Magesh | 7854 | 26,100\n");
  printf ("104 | Naresh | 2345 | 80,000\n");
  printf ("105 | Harish | 1907 | 1,03,400\n");
  int pin;
  printf ("\nPlease enter your secret number\n");
  scanf ("%d", &pin);
  strcpy (e[0].name, "Suresh");
  e[0].pin = 2343;
  e[0].balance = 25234.00;
  e[0].acc = 101;
  strcpy (e[1].name, "Ganesh");
  e[1].pin = 5432;
  e[1].balance = 34123.00;
  e[1].acc = 102;
  strcpy (e[2].name, "Magesh");
  e[2].pin = 7854;
  e[2].balance = 26100.00;
  e[2].acc = 103;
  strcpy (e[3].name, "Naresh");
  e[3].pin = 2345;
  e[3].balance = 80000.00;
  e[3].acc = 104;
  strcpy (e[4].name, "Harish");
  e[4].pin = 1907;
  e[4].balance = 103400.00;
  e[4].acc = 105;
  transaction ();
  return 0;
}
