// Auto-generated module | 2026-05-11T20:28:50.075647
#include <iostream>
#include <vector>

int compute_208() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_208() << std::endl;
    return 0;
}
