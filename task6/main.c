#include <stdio.h>

#define ONE_YEAR 365
#define ONE_DAY 24 
#define ONE_HOUR 3600 

int main(void){

  int age = 18; 
  
  printf("Тики: %d | Часы: %d | Дни: %d | Годы: %d",
         age * ONE_YEAR * ONE_DAY * ONE_HOUR,
         age * ONE_YEAR * ONE_DAY,
         age * ONE_YEAR,
         age);

  return 0; 
}
