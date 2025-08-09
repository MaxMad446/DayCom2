// Auto-generated module | 2026-05-12T21:26:56.121152
#include <iostream>
#include <vector>

int compute_426() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_426() << std::endl;
    return 0;
}
