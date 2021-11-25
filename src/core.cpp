// Auto-generated module | 2026-05-12T21:02:37.711030
#include <iostream>
#include <vector>

int compute_901() {
    int base = 469;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_901() << std::endl;
    return 0;
}
