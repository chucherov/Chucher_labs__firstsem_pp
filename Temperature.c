#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
   double temp=atof(argv[1]);
   char c;
   if(argc==2) {
   c='\0';
   }
   else c=*argv[2];

  switch (c)
        { 
        default: {
		    printf("eror, try again");
			break;
		}
        case 'c': if(temp <= -273.15) {
                  printf("Unable to convert as temperature is equal to absolute zero\n"); 
                  }
                  else 
                  { 
                  printf("C %.2f\n", temp); 
                  printf("F %.2f\n", 1.8 * temp + 32); 
                  printf("K %.2f\n", temp + 273.15);}
                  break;
        case 'f': if (temp <= -459.67) 
                  printf("Unable to convert as temperature is equal to absolute zero\n"); 
                  else 
                  { 
                  printf("C %.2f\n", 5.0/9.0*(temp-32)); 
                  printf("F %.2f\n", temp); 
                  printf("K %.2f\n",5 * (temp - 32) + 273.15);} 
                  break; 
        case 'k': if (temp <= 0) 
                  printf("Unable to convert as temperature is equal to absolute zero\n"); 
                 else 
                 { 
                 printf("C %.2f\n", temp - 273.15); 
                 printf("F %.2f\n", 9 * (temp - 273.15)/5.0 + 32); 
                 printf("K %.2f\n", temp);} 
                 break;
        case '\0': {
	if (temp <= -273.15) {
                printf("Unable to convert as temperature is equal to absolute zero\n"); 
                }
                else 
                { 
                printf("C %.2f\n", temp); 
                printf("F %.2f\n", 1.8 * temp + 32); 
                printf("K %.2f\n", temp + 273.15);} 
                printf("\n");
                if (temp <= -459.67) 
                  printf("Unable to convert as temperature is equal to absolute zero\n"); 
                  else 
                  { 
                  printf("C %.2f\n", 5.0/9.0*(temp-32)); 
                  printf("F %.2f\n", temp); 
                  printf("K %.2f\n",5 * (temp - 32) + 273.15);}
                  printf("\n");
                if (temp <= 0) 
                  printf("Unable to convert as temperature is equal to absolute zero\n"); 
                 else 
                 { 
                 printf("C %.2f\n", temp - 273.15); 
                 printf("F %.2f\n", 9 * (temp - 273.15)/5.0 + 32); 
                 printf("K %.2f\n", temp);}
				 printf("\n"); 
                break;
              }
         
                 } 
    
        return 0; 
}
