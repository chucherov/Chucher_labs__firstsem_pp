#include <stdio.h> 
#include <stdlib.h> 
float mass [100]; 
int counter = 0; 
float push (float i); 
float pop (); 
int main (int argc, char *argv[]){ 
   float p, a, b; 
   char c;
   scanf("%f %f %c", &a,&b,&c); 
   p = a; 
   push (p); 
   p = b; 
   push (p); 
   switch (c){ 
             case '+': 
               printf ("%.4f", pop()+pop()); 
               break; 
             case '-': 
               a = pop (); 
               b = pop (); 
               printf ("%.4f", b - a); 
               break; 
             case '/': 
               a = pop (); 
               b = pop (); 
               printf ("%.4f", b / a); 
               break; 
             case '*': 
	           b = pop (); 
	           a = pop (); 
               printf ("%.4f", a * b); 
               break; 
             default: 
               printf ("error"); 
             break; 
             } 
       return 0; 
       } 
 float push (float i){ 
 if (counter <= 100){ 
 mass [counter] = i; 
 counter++; 
 } 
 } 
 float pop (){ 
 if (counter >= 0) 
 counter--; 
 return mass [counter]; 
}
