// Auto-generated module | 2026-05-12T20:40:08.400195
#include <iostream>
#include <vector>

int compute_698() {
    int base = 107;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_698() << std::endl;
    return 0;
}
