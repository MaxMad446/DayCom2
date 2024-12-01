// Auto-generated module | 2026-05-12T03:48:50.442411
#include <iostream>
#include <vector>

int compute_242() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_242() << std::endl;
    return 0;
}
