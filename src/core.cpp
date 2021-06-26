// Auto-generated module | 2026-05-11T20:20:24.260260
#include <iostream>
#include <vector>

int compute_516() {
    int base = 85;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_516() << std::endl;
    return 0;
}
