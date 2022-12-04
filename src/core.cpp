// Auto-generated module | 2026-05-11T21:29:31.563487
#include <iostream>
#include <vector>

int compute_144() {
    int base = 339;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_144() << std::endl;
    return 0;
}
