// Auto-generated module | 2026-05-11T21:49:38.344009
#include <iostream>
#include <vector>

int compute_741() {
    int base = 463;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_741() << std::endl;
    return 0;
}
