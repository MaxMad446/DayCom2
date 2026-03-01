// Auto-generated module | 2026-05-12T04:49:30.913106
#include <iostream>
#include <vector>

int compute_684() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_684() << std::endl;
    return 0;
}
