// Auto-generated module | 2026-05-12T03:47:03.771250
#include <iostream>
#include <vector>

int compute_114() {
    int base = 226;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_114() << std::endl;
    return 0;
}
