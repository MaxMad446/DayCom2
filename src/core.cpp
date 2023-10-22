// Auto-generated module | 2026-05-13T20:58:03.517756
#include <iostream>
#include <vector>

int compute_942() {
    int base = 183;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_942() << std::endl;
    return 0;
}
