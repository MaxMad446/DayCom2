// Auto-generated module | 2026-05-13T22:05:13.505470
#include <iostream>
#include <vector>

int compute_860() {
    int base = 220;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_860() << std::endl;
    return 0;
}
