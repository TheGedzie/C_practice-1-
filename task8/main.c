#include <stdio.h>

void pulse();

int main(void){
  
  pulse();
  printf("\n");
  pulse();
  pulse();
  printf("\n");
  pulse();
  pulse();
  pulse();

  return 0;
}

void pulse(){
  printf("@");
}
