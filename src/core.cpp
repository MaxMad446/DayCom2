// Auto-generated module | 2026-05-12T04:31:12.921662
#include <iostream>
#include <vector>

int compute_960() {
    int base = 418;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_960() << std::endl;
    return 0;
}
