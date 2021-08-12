// Auto-generated module | 2026-05-12T20:53:30.565805
#include <iostream>
#include <vector>

int compute_793() {
    int base = 190;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_793() << std::endl;
    return 0;
}
