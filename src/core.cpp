// Auto-generated module | 2026-05-12T21:39:20.321963
#include <iostream>
#include <vector>

int compute_160() {
    int base = 28;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_160() << std::endl;
    return 0;
}
