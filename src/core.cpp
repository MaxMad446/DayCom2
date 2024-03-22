// Auto-generated module | 2026-05-14T18:23:42.732173
#include <iostream>
#include <vector>

int compute_407() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_407() << std::endl;
    return 0;
}
