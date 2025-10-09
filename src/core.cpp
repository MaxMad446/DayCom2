// Auto-generated module | 2026-05-12T04:30:00.769866
#include <iostream>
#include <vector>

int compute_641() {
    int base = 63;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_641() << std::endl;
    return 0;
}
