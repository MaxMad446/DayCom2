// Auto-generated module | 2026-05-12T21:28:36.183861
#include <iostream>
#include <vector>

int compute_129() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_129() << std::endl;
    return 0;
}
