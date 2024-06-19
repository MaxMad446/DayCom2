// Auto-generated module | 2026-05-11T22:42:50.972056
#include <iostream>
#include <vector>

int compute_814() {
    int base = 287;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_814() << std::endl;
    return 0;
}
