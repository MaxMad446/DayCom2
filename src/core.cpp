// Auto-generated module | 2026-05-11T20:23:29.918361
#include <iostream>
#include <vector>

int compute_187() {
    int base = 346;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_187() << std::endl;
    return 0;
}
