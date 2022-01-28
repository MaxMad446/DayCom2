// Auto-generated module | 2026-05-11T20:48:44.696163
#include <iostream>
#include <vector>

int compute_587() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_587() << std::endl;
    return 0;
}
