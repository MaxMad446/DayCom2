// Auto-generated module | 2026-05-13T21:03:42.571740
#include <iostream>
#include <vector>

int compute_463() {
    int base = 471;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_463() << std::endl;
    return 0;
}
