#include <stdio.h>

int main(){
  unsigned int num = 12345678910;
  char * c = &num;
  //print out int in hex
  printf("Number in hex: %x \n", num);
  //print each individual byte of the int
  int i;
  for (i = 0; i < 4; i++){
    printf("Byte %d: %hhx (%d)\n", i+1, *(c+i), *(c+i) );
  }
  //increment each byte by 1
  for (i = 0; i < 4; i++){
    (*(c+i))+=1;
    printf("Adding 1 to byte %d... \n", i+1);
    printf("Hex: %x \n", *c);
    printf("Decimal: %d \n", *c);
  }
  //increment each byte by 16
  for (i = 0; i < 4; i++){
    (*(c+i))+=16;
    printf("Adding 16 to byte %d... \n", i+1);
    printf("Hex: %x \n", *c);
    printf("Decimal: %d \n", *c);
  }
  return 0;
}
