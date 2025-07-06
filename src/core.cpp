// Auto-generated module | 2026-05-12T04:17:18.987228
#include <iostream>
#include <vector>

int compute_698() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_698() << std::endl;
    return 0;
}
