#include <stdio.h>

extern void print_all(int n, char **s);

int main(int argc, char **argv) {
  printf("hello world!\n");
  print_all(argc,argv);
  return 0;
}


