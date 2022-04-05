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
char decryptc() {

  return 0;
}


int main() {
  char message_input[100];

  int i = 0;

  // for (i = 0; i < sizeof(message_input)/sizeof(char); ++i){
  //   message_input[i] = ' ';
  //  printf("%d", i);
  // }

  int key;
  char choice[7];

  printf("Enter a message: ");
  scanf("%s", message_input);

  printf("Enter a key: ");
  scanf("%d", &key);

  printf("Encrypt or decrypt? ");
  scanf("%s", choice);

  for (i = 0; i < strlen(message_input); i++) {
    char to_print = encryptc(message_input[i], key);
    puts(to_print);
  }

  return 0;
}
