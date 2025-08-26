// Auto-generated module | 2026-05-12T21:28:27.512392
#include <iostream>
#include <vector>

int compute_129() {
    int base = 111;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_129() << std::endl;
    return 0;
}
