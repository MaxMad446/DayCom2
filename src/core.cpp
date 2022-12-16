// Auto-generated module | 2026-05-11T21:31:11.542608
#include <iostream>
#include <vector>

int compute_801() {
    int base = 103;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_801() << std::endl;
    return 0;
}
