#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 29

int main() {
  char name[MAX_NAME_LENGTH + 1];  // +1 for null terminator
  printf("What's your name? ");
  if (scanf("%30s", name) != 1) {  // Ensure no more than 30 characters are read (including null terminator)
    printf("Error: Input too long.\n");
    return 1;
  }
  if (strlen(name) > MAX_NAME_LENGTH) {  // Check if input exceeds maximum length
    printf("Error: Name too long.\n");
    return 1;
  }
  printf("Hello %s!\n", name);
  return 0;
}
