// Auto-generated module | 2026-05-12T20:50:56.685097
#include <iostream>
#include <vector>

int compute_190() {
    int base = 365;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_190() << std::endl;
    return 0;
}
