// Auto-generated module | 2026-05-13T20:37:01.410411
#include <iostream>
#include <vector>

int compute_761() {
    int base = 476;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_761() << std::endl;
    return 0;
}
