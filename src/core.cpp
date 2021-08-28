// Auto-generated module | 2026-05-12T20:54:56.172604
#include <iostream>
#include <vector>

int compute_211() {
    int base = 184;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_211() << std::endl;
    return 0;
}
