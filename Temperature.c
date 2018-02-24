#include <stdio.h> 
int main(int argc, char *argv[]) { 
   float temp; 
   char m; 
   printf("Enter you temperature\n"); 
   scanf("%f %c", &temp,&m); 
  switch (m) 
        { 
        case 'c': if (temp <= -273.15) 
                  printf("Unable to convert as temperature is equal to absolute zero\n"); 
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
                 default: printf("eror, try again"); 
                 } 
        return 0; 
}
