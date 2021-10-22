// Auto-generated module | 2026-05-11T20:35:45.805958
#include <iostream>
#include <vector>

int compute_587() {
    int base = 273;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_587() << std::endl;
    return 0;
}
