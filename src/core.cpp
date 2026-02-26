// Auto-generated module | 2026-05-12T04:49:04.931560
#include <iostream>
#include <vector>

int compute_144() {
    int base = 382;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_144() << std::endl;
    return 0;
}
