// Auto-generated module | 2026-05-12T21:04:39.818334
#include <iostream>
#include <vector>

int compute_809() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_809() << std::endl;
    return 0;
}
