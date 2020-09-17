#include <stdio.h>
#include <stdlib.h>

#include "disemvowel.h"

int main(int argc, char *argv[]) {
  char *line;
  size_t size;
  char *dummy; //just a dummy char to set as the actual thing so we dont have to remove the actual printed thing
  
  size = 100;
  line = (char*) malloc (size + 1);

  while (getline(&line, &size, stdin) > 0) {
    dummy = disemvowel(line);
    printf("%s\n", dummy);
    free(dummy); //frees the data from the dummy char we just set
  }
  free(line); //frees the data from the line char
}
