// Auto-generated module | 2026-05-12T04:05:10.918275
#include <iostream>
#include <vector>

int compute_384() {
    int base = 214;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_384() << std::endl;
    return 0;
}
