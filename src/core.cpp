// Auto-generated module | 2026-05-12T21:16:46.612610
#include <iostream>
#include <vector>

int compute_407() {
    int base = 278;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_407() << std::endl;
    return 0;
}
