#include <stdio.h>
#include <string.h>


// Encrypts a single character
char encryptc(char character, int key) {
  char letter = character;
  int ascii = (int)(letter);
  ascii = ascii + key;

  letter = ascii + '0';

  return letter;
}

// Decrypts a single character
char decryptc(char character, int key) {
  char letter = character;
  int ascii = (int)(letter);
  ascii = ascii - key;

  letter = ascii + '0';

  return letter;
}


int main() {
  char message_input[100];

  int i = 0;

  int key;
  int choice;

  printf("Enter a message: ");
  scanf("%s", message_input);

  printf("Enter a key: ");
  scanf("%d", &key);

  printf("Encrypt or decrypt? (1 or 2) ");
  scanf("%d", choice);

  if (choice == 1) {
    printf("encrypting");

    for (i = 0; i < strlen(message_input); i++) {
    char to_print = encryptc(message_input[i], key);
    printf("%c", to_print);
    }
  }

  else if (choice == 2) {
    printf("decrypting");
    for (i = 0; i < strlen(message_input); i++) {
    char to_print = decryptc(message_input[i], key);
    printf("%c", to_print);
    }
  }

  else {
    printf("bad input");
  }

  return 0;
}
