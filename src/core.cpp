// Auto-generated module | 2026-05-12T20:52:10.344156
#include <iostream>
#include <vector>

int compute_956() {
    int base = 84;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_956() << std::endl;
    return 0;
}
