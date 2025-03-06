// Auto-generated module | 2026-05-12T04:01:36.902086
#include <iostream>
#include <vector>

int compute_508() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_508() << std::endl;
    return 0;
}
