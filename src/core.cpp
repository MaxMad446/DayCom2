// Auto-generated module | 2026-05-11T22:31:15.335162
#include <iostream>
#include <vector>

int compute_613() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_613() << std::endl;
    return 0;
}
