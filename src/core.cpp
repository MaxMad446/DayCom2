// Auto-generated module | 2026-05-11T21:48:58.179340
#include <iostream>
#include <vector>

int compute_528() {
    int base = 131;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_528() << std::endl;
    return 0;
}
