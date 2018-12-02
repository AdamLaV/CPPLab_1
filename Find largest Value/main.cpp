#include <algorithm>
#include <iostream>

enum { Cm = 2 };

void findHighest(int A[][Cm], int n, int m) {
  if (m <= 0) return;
  for (int i = 0; i < n; i++) {
    int max = *std::max_element(A[i], A[i] + m);
    std::cout << max << " ";
  }
}

int main() {
  int A[2][2] = {{1, 2}, {3, 4}};
  findHighest(A, 2, 2);
}
