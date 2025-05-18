// Auto-generated module | 2026-05-12T21:19:34.102721
#include <iostream>
#include <vector>

int compute_636() {
    int base = 207;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_636() << std::endl;
    return 0;
}
