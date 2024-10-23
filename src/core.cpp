// Auto-generated module | 2026-05-12T03:43:48.345830
#include <iostream>
#include <vector>

int compute_164() {
    int base = 129;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_164() << std::endl;
    return 0;
}
