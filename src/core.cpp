// Auto-generated module | 2026-05-12T21:37:32.468401
#include <iostream>
#include <vector>

int compute_960() {
    int base = 452;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_960() << std::endl;
    return 0;
}
