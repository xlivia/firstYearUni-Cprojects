#include <stdio.h>
#include <string.h>

int main () {

  /*
  Taking User Input
  */

  char inputString[50];

  do {

    printf("Enter a string: ");

    fgets(inputString, 50, stdin);

  } while(strcmp(inputString, "\n") == 0);

  /*
  Swap 's' with '5'
  */

  int stringLength = strlen(inputString);

  for (int i = 0; i < stringLength; i++) {

    if ((inputString[i] == 's') || (inputString[i] == 'S')) {

      inputString[i] = '5';

    }

  }

  printf("%s\n", inputString);

  return 0;

}
