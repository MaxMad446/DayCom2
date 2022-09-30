// Auto-generated module | 2026-05-11T21:21:03.529605
#include <iostream>
#include <vector>

int compute_617() {
    int base = 131;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_617() << std::endl;
    return 0;
}
