// Auto-generated module | 2026-05-12T20:47:29.295293
#include <iostream>
#include <vector>

int compute_187() {
    int base = 424;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_187() << std::endl;
    return 0;
}
