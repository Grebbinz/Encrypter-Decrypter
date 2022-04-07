#include <iostream>
#include <string>

using namespace std;


string encrypt(string message, int key) {
  int i;
  // the start the same so they have the same length
  string e_message = message;

  for (i = 0; i < message.length(); i++) {
    e_message[i] = char(int(message[i]) + key);
  }

  return e_message;
}


string decrypt(string message, int key) {
  int i;
  // the start the same so they have the same length
  string e_message = message;

  for (i = 0; i < message.length(); i++) {
    e_message[i] = char(int(message[i]) - key);
  }

  return e_message;
}


int main() {
  string message;
  int key;
  string choice;

  cout << "Enter message: ";
  getline(cin, message);

  cout << "Enter key: ";
  cin >> key;

  cin.ignore();
  cout << "Enter choice (encrypt or decrypt): ";
  getline(cin, choice);

  if (choice == "encrypt") {
    cout << encrypt(message, key) + "\n";
  }
  else if (choice == "decrypt") {
    cout << decrypt(message, key) + "\n";
  }
  else {
    cout << "bad input";
  }

  // string any;
  // cout << "Type any key to continue...";
  // cin >> any;

  cout << "Press enter to continue...\n";
  cin.get();

  return 0;
}
