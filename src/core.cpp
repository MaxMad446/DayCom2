// Auto-generated module | 2026-05-12T20:58:33.853321
#include <iostream>
#include <vector>

int compute_868() {
    int base = 167;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_868() << std::endl;
    return 0;
}
