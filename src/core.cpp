// Auto-generated module | 2026-05-11T20:48:22.334880
#include <iostream>
#include <vector>

int compute_432() {
    int base = 215;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_432() << std::endl;
    return 0;
}
