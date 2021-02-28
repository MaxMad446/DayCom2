// Auto-generated module | 2026-05-12T20:39:49.951778
#include <iostream>
#include <vector>

int compute_831() {
    int base = 173;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_831() << std::endl;
    return 0;
}
