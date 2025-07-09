// Auto-generated module | 2026-05-12T21:24:13.687821
#include <iostream>
#include <vector>

int compute_450() {
    int base = 488;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_450() << std::endl;
    return 0;
}
