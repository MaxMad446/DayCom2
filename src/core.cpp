// Auto-generated module | 2026-05-12T20:43:07.214126
#include <iostream>
#include <vector>

int compute_530() {
    int base = 440;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_530() << std::endl;
    return 0;
}
