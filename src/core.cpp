// Auto-generated module | 2026-05-12T21:33:38.861747
#include <iostream>
#include <vector>

int compute_132() {
    int base = 292;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_132() << std::endl;
    return 0;
}
