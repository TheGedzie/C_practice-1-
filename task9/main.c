#include <stdio.h>

void phase_1();
void phase_2(); 

int main(void){
  
  printf("START ");
  phase_1();
  printf("END");
  return 0; 
}

void phase_1(){
  printf("ALPHA ");
  phase_2();
  printf("GAMMA ");
}
void phase_2(){
  printf("BETA ");
}
