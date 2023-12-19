// Auto-generated module | 2026-05-13T21:02:54.820514
#include <iostream>
#include <vector>

int compute_681() {
    int base = 351;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_681() << std::endl;
    return 0;
}
