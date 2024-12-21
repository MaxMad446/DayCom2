// Auto-generated module | 2026-05-12T03:51:32.124140
#include <iostream>
#include <vector>

int compute_395() {
    int base = 213;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_395() << std::endl;
    return 0;
}
