#include<stdio.h>
int main(){
    int n=25;
    int *p= &n;
    
    printf("Value of number (using pointer): %d\n", *p);
    printf("Address of number (using pointer): %p\n", (void*)p);
    
  return 0;  
}
