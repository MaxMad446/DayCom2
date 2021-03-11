// Auto-generated module | 2026-05-12T21:36:19.427342
#include <iostream>
#include <vector>

int compute_750() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_750() << std::endl;
    return 0;
}
