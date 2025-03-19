#include <stdio.h>
int main()
{
  int month, day, year;
printf("\nPlease enter your date of birth in the form Month/Day/Year: ");
  scanf("%d/%d/%d", &month,&day, &year);
  
  
  
  switch (month)
    {
    case 1:   
      printf("Your birthday , January %d, %d", day, year);
      break;
   
    case 2 :   
      printf("Your birthday , February %d, %d", day, year);
      break;
   
    case 3 :   
      printf("Your birthday , March %d, %d", day, year);
      break;
   
    case 4:   
      printf("Your birthday , April %d, %d", day, year);      
      break;

    case 5:   
      printf("Your birthday , May %d, %d", day, year);    
      break;

    case 6 :   
      printf("Your birthday , June %d, %d", day, year);    
      break;

    case 7:   
      printf("Your birthday , July %d, %d", day, year);     
      break;

    case 8:   
      printf("Your birthday , August %d, %d", day, year);     
      break;

    case 9:   
      printf("Your birthday , September %d, %d", day, year);        
      break;

    case 10:   
      printf("Your birthday , October %d, %d", day, year);      
      break;

    case 11:   
      printf("Your birthday , November %d, %d", day, year);
      break;

    case 12:   
      printf("Your birthday , December %d, %d", day, year);
      
      
    
 }

  if ((year % 4==0 && year % 100 != 0) ||  year % 400 ==0)
  {
    
  printf(" is a leap year\n");
    
  }
  else
  {
  printf(" is not a leap year\n");

  }
      
    

  return 0;
}

