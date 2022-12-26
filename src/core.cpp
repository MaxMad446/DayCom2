// Auto-generated module | 2026-05-14T06:28:18.510250
#include <iostream>
#include <vector>

int compute_620() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_620() << std::endl;
    return 0;
}
