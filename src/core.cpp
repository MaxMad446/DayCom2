// Auto-generated module | 2026-05-12T21:23:01.334693
#include <iostream>
#include <vector>

int compute_996() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_996() << std::endl;
    return 0;
}
