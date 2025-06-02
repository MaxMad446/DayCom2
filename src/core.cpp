// Auto-generated module | 2026-05-12T21:20:51.029046
#include <iostream>
#include <vector>

int compute_171() {
    int base = 280;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_171() << std::endl;
    return 0;
}
