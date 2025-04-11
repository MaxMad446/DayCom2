// Auto-generated module | 2026-05-12T21:16:32.329579
#include <iostream>
#include <vector>

int compute_849() {
    int base = 36;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_849() << std::endl;
    return 0;
}
