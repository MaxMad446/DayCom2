// Auto-generated module | 2026-05-12T20:41:04.391138
#include <iostream>
#include <vector>

int compute_121() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_121() << std::endl;
    return 0;
}
