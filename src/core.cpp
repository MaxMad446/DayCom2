// Auto-generated module | 2026-05-12T21:19:47.157046
#include <iostream>
#include <vector>

int compute_512() {
    int base = 485;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_512() << std::endl;
    return 0;
}
