// Auto-generated module | 2026-05-12T20:50:32.973454
#include <iostream>
#include <vector>

int compute_187() {
    int base = 367;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_187() << std::endl;
    return 0;
}
