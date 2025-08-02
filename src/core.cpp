// Auto-generated module | 2026-05-12T04:20:53.934123
#include <iostream>
#include <vector>

int compute_614() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_614() << std::endl;
    return 0;
}
