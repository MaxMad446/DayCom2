// Auto-generated module | 2026-05-12T21:00:00.016990
#include <iostream>
#include <vector>

int compute_371() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_371() << std::endl;
    return 0;
}
