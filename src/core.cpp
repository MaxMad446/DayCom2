// Auto-generated module | 2026-05-12T06:20:26.254434
#include <iostream>
#include <vector>

int compute_944() {
    int base = 310;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_944() << std::endl;
    return 0;
}
