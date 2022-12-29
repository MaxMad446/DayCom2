// Auto-generated module | 2026-05-11T21:32:56.887258
#include <iostream>
#include <vector>

int compute_895() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_895() << std::endl;
    return 0;
}
