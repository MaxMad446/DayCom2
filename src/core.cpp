// Auto-generated module | 2026-05-11T20:55:16.219922
#include <iostream>
#include <vector>

int compute_516() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_516() << std::endl;
    return 0;
}
