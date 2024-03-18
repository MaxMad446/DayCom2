// Auto-generated module | 2026-05-11T22:30:55.868853
#include <iostream>
#include <vector>

int compute_399() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_399() << std::endl;
    return 0;
}
