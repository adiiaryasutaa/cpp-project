#include <iostream>
#include <random>
#include <time.h>
#include <string>
using namespace std;

int getRandomNumber(int range);
bool checkAnswer(int answer);
string hint(int lastAnswer);
string remainingattempts();
string remainingHints();
void printMessage(string msg);

int attempts  = 4;
int hints     = 2;
const int range     = 20;
const int theNumber = getRandomNumber(range);

int main(int argc, char const *argv[]) {

  string lastAnswer;
  int answer;
  bool hasAnswer = false;
  
  cout << "             Guess the number between 1 and " << range      << endl;
  cout << "(Type 'hint' to know how high or low your last number was)" << endl;
  cout << "==========================================================" << endl;

  while (attempts > 0) {
    cout << "Your answer >> "; cin >> lastAnswer;

    if (lastAnswer == "hint" || lastAnswer == "Hint") {
      if (hasAnswer) { printMessage(hint(answer)); }
      else { printMessage("You've gotta actually take a guess first before you get a hint"); }
    } else {
      hasAnswer = true;
      try { answer = stoi(lastAnswer); }
      catch(exception e) {
        attempts -= 1;
        printMessage("It's gotta be a valid number\n" + remainingattempts() + " and " + remainingHints());
        continue;
      }

      if (checkAnswer(answer)) {
        printMessage("Great job :D");
        break;
      } else {
        if (attempts == 0) {
          printMessage("Unlucky, you ran out of attempts to guess the number. I was thinking of " + to_string(theNumber));
        } else {
          printMessage("Not this time, " + remainingattempts() + " and " + remainingHints());
        }
      }
    }
  }

  return 0;
}

int getRandomNumber(int range) {
  srand(time(0));
  return rand() % range + 1;
}

bool checkAnswer(int answer) {
  attempts -= 1;
  return answer == theNumber;
}

string hint(int lastAnswer) {
  if (hints == 0) return "you've run out of hints";
  hints -= 1;
  return lastAnswer < theNumber ? "Your last number was too low" : "Your last number was too high";
}

string remainingattempts() {
  return to_string(attempts) + (attempts == 1 ? " attempt left" : " attempts left");
}

string remainingHints() {
  return to_string(hints) + (hints == 1 ? " hint left" : " hints left");
}

void printMessage(string msg) {
  cout << ">> " << msg << endl;
}