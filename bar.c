#include <stdio.h>

void print_all(int n, char **s) {
  for (int i = 0; i<n; i++) {
    printf("%s\n",s[i]);
  }
}
