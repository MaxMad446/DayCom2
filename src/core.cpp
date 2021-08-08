// Auto-generated module | 2026-05-12T20:53:04.167013
#include <iostream>
#include <vector>

int compute_431() {
    int base = 82;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_431() << std::endl;
    return 0;
}
