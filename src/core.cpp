// Auto-generated module | 2026-05-13T20:59:27.933782
#include <iostream>
#include <vector>

int compute_407() {
    int base = 203;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_407() << std::endl;
    return 0;
}
