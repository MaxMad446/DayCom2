// Auto-generated module | 2026-05-12T21:09:06.006384
#include <iostream>
#include <vector>

int compute_145() {
    int base = 474;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_145() << std::endl;
    return 0;
}
