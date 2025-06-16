// Auto-generated module | 2026-05-12T04:14:39.248679
#include <iostream>
#include <vector>

int compute_963() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_963() << std::endl;
    return 0;
}
