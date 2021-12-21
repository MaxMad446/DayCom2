// Auto-generated module | 2026-05-11T20:43:48.530215
#include <iostream>
#include <vector>

int compute_184() {
    int base = 458;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_184() << std::endl;
    return 0;
}
