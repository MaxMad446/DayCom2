// Auto-generated module | 2026-05-12T21:31:35.317639
#include <iostream>
#include <vector>

int compute_407() {
    int base = 50;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_407() << std::endl;
    return 0;
}
