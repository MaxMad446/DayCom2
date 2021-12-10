// Auto-generated module | 2026-05-11T20:42:23.877621
#include <iostream>
#include <vector>

int compute_448() {
    int base = 427;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_448() << std::endl;
    return 0;
}
