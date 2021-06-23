// Auto-generated module | 2026-05-12T20:49:19.782408
#include <iostream>
#include <vector>

int compute_232() {
    int base = 55;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_232() << std::endl;
    return 0;
}
