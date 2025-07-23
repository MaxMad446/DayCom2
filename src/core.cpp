// Auto-generated module | 2026-05-12T21:25:22.921525
#include <iostream>
#include <vector>

int compute_563() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_563() << std::endl;
    return 0;
}
