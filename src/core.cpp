// Auto-generated module | 2026-05-13T20:53:19.840030
#include <iostream>
#include <vector>

int compute_192() {
    int base = 390;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_192() << std::endl;
    return 0;
}
