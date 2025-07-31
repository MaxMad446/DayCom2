// Auto-generated module | 2026-05-12T04:20:39.567733
#include <iostream>
#include <vector>

int compute_108() {
    int base = 406;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_108() << std::endl;
    return 0;
}
