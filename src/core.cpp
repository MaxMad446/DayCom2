// Auto-generated module | 2026-05-12T21:17:20.248666
#include <iostream>
#include <vector>

int compute_560() {
    int base = 197;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_560() << std::endl;
    return 0;
}
