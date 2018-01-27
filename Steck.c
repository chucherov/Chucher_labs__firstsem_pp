#include <stdlib.h> 
#include <stdio.h> 
 
#define MY_SIZE 10000 
 
int count = 0; 
int my_stack[MY_SIZE]; 
 
int check_full() { 
      if (count == MY_SIZE){ 
           return 1; 
           } 
      else{ 
          return 0; 
          } 
} 
 
int check_empty() { 
     if (count == 0){ 
      return 1; 
      } 
   else{ 
   return 0; 
   } 
} 
 
void push(int n) { 
      if (check_full() == 1) { 
      return; 
      } 
   my_stack[count] = n; 
   count++; 
   return; 
   } 
 
void pop() { 
     if (check_empty() == 1){ 
     return; 
     } 
   my_stack[count - 1] = 0; 
   count--; 
  } 
 
int top() { 
  return my_stack[count - 1]; 
  } 
 
int size() { 
  return count; 
} 
 
int main(){ 
 push(1); 
 push(3); 
 push(21); 
 push(12); 
 printf("Top element = %d\n", top()); /*Top element (last) is 12*/
 printf("Size = %d\n", size()); /*Size is 4*/
 
 pop(); /*delete top element*/
 printf("Top element = %d\n", top());/*Yop element is 21*/ 
 printf("Size = %d\n", size()); /*Size is 3*/
 
 pop(); 
 pop(); 
 pop(); /*Delete three elements*/
 printf("Top element = %d\n", top()); /*Top element is 0*/
 printf("Size = %d\n", size()); /*Size is 0*/
 getch();
 return 0; 
}
