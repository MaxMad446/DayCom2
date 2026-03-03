// Auto-generated module | 2026-05-12T04:49:46.909610
#include <iostream>
#include <vector>

int compute_776() {
    int base = 250;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_776() << std::endl;
    return 0;
}
