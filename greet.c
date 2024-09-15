#include<stdio.h>
void nikhil(){//5
  printf("chotu\n");
}

void greet(){ //3
  nikhil(); //4
  int a;
  a=4;
  printf("%d",a);
}
int main(){   //1
 printf("hello, how are you\n");
  greet(); //2
printf("\n");
  printf("\nHELLO\n");
   greet(); 
  greet(); 
  greet();
  greet();
  greet();
  
return 0;
}
