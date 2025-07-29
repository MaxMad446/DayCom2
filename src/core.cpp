// Auto-generated module | 2026-05-12T21:25:57.442147
#include <iostream>
#include <vector>

int compute_930() {
    int base = 231;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_930() << std::endl;
    return 0;
}
