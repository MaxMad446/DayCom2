// Auto-generated module | 2026-05-11T22:15:15.258663
#include <iostream>
#include <vector>

int compute_448() {
    int base = 114;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_448() << std::endl;
    return 0;
}
