// Auto-generated module | 2026-05-11T21:56:27.616446
#include <iostream>
#include <vector>

int compute_614() {
    int base = 207;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_614() << std::endl;
    return 0;
}
