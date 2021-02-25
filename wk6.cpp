
#include <fstream>
#include <vector>
#include <map>
#include <string>
#include <sstream>
#include <iostream>
#include "csc160.h"

using namespace std;
using std::ifstream;
using std::stringstream;


void sayHello(string name) {
  cout << "hello " << name << endl;
}

void sayHello(string firstName, string lastName) {
  cout << "hello " << firstName << " " << lastName << endl;
}

void sayHello(string firstName, string middleName, string lastName) {
  cout << "hello " << firstName << " " << middleName << " " << lastName << endl;
}

void passByValueCopy(int a) {
  a = 42;
}

void passByReference(int &a) {
  a = 42;
}

int main() {
  string firstName = "John";
  string middleName = "Jingleheimer";
  string lastName = "Schmidt";

  sayHello(firstName);
  sayHello(firstName, lastName);
  sayHello(firstName, middleName, lastName);

  int a = 4;

  cout << "before pass by copy " << a << endl;
  passByValueCopy(a);
  cout << "after pass by copy " << a << endl;

  cout << "before pass by ref " << a << endl;
  passByReference(a);
  cout << "after pass by ref " << a << endl;

}