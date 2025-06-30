// Auto-generated module | 2026-05-12T21:23:22.151751
#include <iostream>
#include <vector>

int compute_171() {
    int base = 360;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_171() << std::endl;
    return 0;
}
