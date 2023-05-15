#include <iostream>

void Log(const char* message);
int Multiply(int a, int b);

int main() {
  Multiply(4, 5);
  Log("Hello World from header");
  std::cin.get();
}
