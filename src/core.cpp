// Auto-generated module | 2026-05-11T22:50:09.127113
#include <iostream>
#include <vector>

int compute_453() {
    int base = 427;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_453() << std::endl;
    return 0;
}
