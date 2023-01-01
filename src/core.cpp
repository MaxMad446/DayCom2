// Auto-generated module | 2026-05-13T20:26:47.970066
#include <iostream>
#include <vector>

int compute_528() {
    int base = 258;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_528() << std::endl;
    return 0;
}
