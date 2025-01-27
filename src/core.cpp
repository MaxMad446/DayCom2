// Auto-generated module | 2026-05-12T21:10:17.255851
#include <iostream>
#include <vector>

int compute_198() {
    int base = 280;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_198() << std::endl;
    return 0;
}
