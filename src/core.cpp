// Auto-generated module | 2026-05-11T21:46:38.646727
#include <iostream>
#include <vector>

int compute_931() {
    int base = 245;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_931() << std::endl;
    return 0;
}
