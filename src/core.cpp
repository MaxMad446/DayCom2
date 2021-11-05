// Auto-generated module | 2026-05-12T21:00:50.288369
#include <iostream>
#include <vector>

int compute_794() {
    int base = 487;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_794() << std::endl;
    return 0;
}
