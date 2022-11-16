// Auto-generated module | 2026-05-11T21:27:09.480596
#include <iostream>
#include <vector>

int compute_563() {
    int base = 137;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_563() << std::endl;
    return 0;
}
