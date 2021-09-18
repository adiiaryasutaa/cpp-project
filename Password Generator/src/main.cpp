#include <iostream>
#include <random>
#include <time.h>
using namespace std;

string makePassword(int length);

int main(int argc, char const *argv[])
{
  int length;
  
  while (true) {
    cout << "PASSWORD GENERATOR" << endl
         << "Type '0' to exit"   << endl
         << "==================" << endl
         << "(Pasword length) >> ";
    cin >> length;
    if (length == 0) break;
    else cout << "\n\t" << makePassword(length) << "\n\n";
  }
  
  return 0;
}

string makePassword(int length) {
  string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!”#$%&'()*+,-./:;<=>?@[]^_`{|}~";
  string password = "";

  srand((unsigned)time(0));

  for (int i = 0; i < length; i++) {
    password.append(characters, rand() % characters.size(), 1);
  }

  return password;
}