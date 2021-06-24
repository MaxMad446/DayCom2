// Auto-generated module | 2026-05-12T20:49:26.063484
#include <iostream>
#include <vector>

int compute_398() {
    int base = 15;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_398() << std::endl;
    return 0;
}
