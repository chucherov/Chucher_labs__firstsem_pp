#include <stdio.h> 
 
int check_century(int y); 
 
int code_month(int m); 
 
int code_year(int y); 
 
int check_century(int y){ 
   int ftn = y / 100; 
   if(ftn % 4 == 0){ 
     return 6; 
   } 
   if(ftn % 4 == 1){ 
     return 4; 
   } 
   if(ftn % 4 == 2){ 
     return 2; 
   } 
   if(ftn % 4 == 3){ 
     return 0; 
   } 
     return 0; 
   } 
  
   int code_month(int m){ 
   if(m == 1 || m == 10){ 
     return 1; 
   } 
   if (m == 5){ 
     return 2; 
   } 
   if (m == 8){ 
     return 3; 
   } 
   if (m == 2 || m == 3 || m == 11){ 
     return 4; 
   } 
   if (m == 6){ 
     return 5; 
   } 
  if (m == 12 || m == 9){ 
     return 6; 
   } 
   if (m == 4 || m == 7){ 
     return 0; 
   } 
     return -1; 
   } 
 
   int code_year(int y){ 
   int last_two_numbers = y % 100; 
   int res = (check_century(y) + last_two_numbers + (last_two_numbers/4)) % 7; 
   return res; 
   }
   int main(void) { 
   int day, month, year;
   int ans;
   scanf("%d",&day); 
   scanf("%d",&month); 
   scanf("%d",&year); 
   ans = (day + code_month(month) + code_year(year)) % 7; 
   if(ans == 0) printf("%s", "Saturday"); 
   if(ans == 1) printf("%s", "Sunday"); 
   if(ans == 2) printf("%s", "Monday"); 
   if(ans == 3) printf("%s", "Tuesday"); 
   if(ans == 4) printf("%s", "Wednesday"); 
   if(ans == 5) printf("%s", "Thursday"); 
   if(ans == 6) printf("%s", "Friday"); 
   getch();
   return 0; 
} 

