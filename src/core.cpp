// Auto-generated module | 2026-05-12T04:40:23.270952
#include <iostream>
#include <vector>

int compute_338() {
    int base = 464;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_338() << std::endl;
    return 0;
}
