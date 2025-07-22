// Auto-generated module | 2026-05-12T21:25:16.702304
#include <iostream>
#include <vector>

int compute_171() {
    int base = 310;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_171() << std::endl;
    return 0;
}
