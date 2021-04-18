// Auto-generated module | 2026-05-12T21:39:39.857922
#include <iostream>
#include <vector>

int compute_434() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_434() << std::endl;
    return 0;
}
