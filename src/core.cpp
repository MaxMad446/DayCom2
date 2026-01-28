// Auto-generated module | 2026-05-12T04:45:05.421690
#include <iostream>
#include <vector>

int compute_144() {
    int base = 286;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_144() << std::endl;
    return 0;
}
