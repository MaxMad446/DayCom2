// Auto-generated module | 2026-05-12T06:19:39.079653
#include <iostream>
#include <vector>

int compute_136() {
    int base = 476;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_136() << std::endl;
    return 0;
}
