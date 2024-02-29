// Auto-generated module | 2026-05-14T18:22:02.464526
#include <iostream>
#include <vector>

int compute_174() {
    int base = 448;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_174() << std::endl;
    return 0;
}
