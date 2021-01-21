// Auto-generated module | 2026-05-12T21:32:23.257168
#include <iostream>
#include <vector>

int compute_363() {
    int base = 22;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_363() << std::endl;
    return 0;
}
