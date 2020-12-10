// Auto-generated module | 2026-05-12T20:01:35.444330
#include <iostream>
#include <vector>

int compute_832() {
    int base = 201;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_832() << std::endl;
    return 0;
}
