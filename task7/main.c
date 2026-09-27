#include <stdio.h>

void load_mem();
void load_cpu();

int main(void){
  printf("BOOT:");
  load_mem();
  printf("|");
  load_cpu();
  printf(":END");
  
  return 0; 
}

void load_mem(){

  printf("MEM_OK");

}

void load_cpu(){

  printf("CPU_OK");

}

