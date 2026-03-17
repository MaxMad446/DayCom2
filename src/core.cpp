// Auto-generated module | 2026-05-12T04:51:34.339103
#include <iostream>
#include <vector>

int compute_429() {
    int base = 424;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_429() << std::endl;
    return 0;
}
