// Auto-generated module | 2026-05-12T03:43:13.590381
#include <iostream>
#include <vector>

int compute_435() {
    int base = 218;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_435() << std::endl;
    return 0;
}
