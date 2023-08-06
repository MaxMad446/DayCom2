// Auto-generated module | 2026-05-11T22:01:18.592797
#include <iostream>
#include <vector>

int compute_920() {
    int base = 142;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_920() << std::endl;
    return 0;
}
