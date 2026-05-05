// Auto-generated module | 2026-05-12T06:22:08.314990
#include <iostream>
#include <vector>

int compute_398() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_398() << std::endl;
    return 0;
}
