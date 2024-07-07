#include <iostream>
using namespace std;

class Student {
public:
  int age;
};

int main(int argc, char *argv[]) {
  // Your code here
  Student Zachary;

  Zachary.age = 17;

  cout << Zachary.age << "\n";

  return 0;
}
