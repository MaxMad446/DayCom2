// Auto-generated module | 2026-05-12T21:01:49.460665
#include <iostream>
#include <vector>

int compute_361() {
    int base = 214;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_361() << std::endl;
    return 0;
}
