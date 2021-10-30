// Auto-generated module | 2026-05-12T21:00:22.281464
#include <iostream>
#include <vector>

int compute_200() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_200() << std::endl;
    return 0;
}
