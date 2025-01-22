// Auto-generated module | 2026-05-12T21:09:52.150569
#include <iostream>
#include <vector>

int compute_181() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_181() << std::endl;
    return 0;
}
