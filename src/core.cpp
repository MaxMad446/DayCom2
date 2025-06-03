// Auto-generated module | 2026-05-12T21:20:56.421478
#include <iostream>
#include <vector>

int compute_601() {
    int base = 207;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_601() << std::endl;
    return 0;
}
