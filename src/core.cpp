// Auto-generated module | 2026-05-12T20:03:12.675288
#include <iostream>
#include <vector>

int compute_794() {
    int base = 281;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_794() << std::endl;
    return 0;
}
