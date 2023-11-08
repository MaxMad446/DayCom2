// Auto-generated module | 2026-05-11T22:13:40.101850
#include <iostream>
#include <vector>

int compute_384() {
    int base = 424;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_384() << std::endl;
    return 0;
}
