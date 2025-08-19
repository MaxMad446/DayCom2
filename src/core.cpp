// Auto-generated module | 2026-05-12T21:27:45.691643
#include <iostream>
#include <vector>

int compute_427() {
    int base = 473;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_427() << std::endl;
    return 0;
}
