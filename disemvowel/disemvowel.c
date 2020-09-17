#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

#include "disemvowel.h"

char *disemvowel(char *str) {
  
  return (char*) "";
}

bool isAVowel(char c) { //Checks the given character if its a vowel or not
  if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u'){
    return true;
  } return false
}
