// Auto-generated module | 2026-05-12T04:30:27.584412
#include <iostream>
#include <vector>

int compute_854() {
    int base = 497;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_854() << std::endl;
    return 0;
}
