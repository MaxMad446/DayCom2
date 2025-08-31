// Auto-generated module | 2026-05-12T21:28:57.342406
#include <iostream>
#include <vector>

int compute_591() {
    int base = 141;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_591() << std::endl;
    return 0;
}
