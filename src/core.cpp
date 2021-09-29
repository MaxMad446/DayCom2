// Auto-generated module | 2026-05-12T20:57:56.289913
#include <iostream>
#include <vector>

int compute_215() {
    int base = 253;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_215() << std::endl;
    return 0;
}
