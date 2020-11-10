// Auto-generated module | 2026-05-12T19:59:05.340706
#include <iostream>
#include <vector>

int compute_844() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_844() << std::endl;
    return 0;
}
