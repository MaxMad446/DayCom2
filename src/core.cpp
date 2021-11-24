// Auto-generated module | 2026-05-12T21:02:33.218083
#include <iostream>
#include <vector>

int compute_446() {
    int base = 326;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_446() << std::endl;
    return 0;
}
